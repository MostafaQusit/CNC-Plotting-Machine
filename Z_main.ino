// main function:
void setup() {
    // Encoders - Position Masure:
    pinMode(ENCODER_CHANNEL_AX,INPUT_PULLUP);  pinMode(ENCODER_CHANNEL_BX,INPUT_PULLUP); // X-axis
    pinMode(ENCODER_CHANNEL_AY,INPUT_PULLUP);  pinMode(ENCODER_CHANNEL_BY,INPUT_PULLUP); // Y-axis
    // Interrupts:
    attachInterrupt(digitalPinToInterrupt(ENCODER_CHANNEL_AX),Encoder_AX,CHANGE);
    attachInterrupt(digitalPinToInterrupt(ENCODER_CHANNEL_BX),Encoder_BX,CHANGE);
    //attachInterrupt(digitalPinToInterrupt(ENCODER_CHANNEL_AY),Encoder_AY,CHANGE);
    //attachInterrupt(digitalPinToInterrupt(ENCODER_CHANNEL_BY),Encoder_BY,CHANGE);
    
    // Limit Switches:
    pinMode(LIMIT_SW_X,INPUT_PULLUP);   pinMode(LIMIT_SW_UP  ,INPUT_PULLUP);
    pinMode(LIMIT_SW_Y,INPUT_PULLUP);   pinMode(LIMIT_SW_DOWN,INPUT_PULLUP);

    Serial.begin(115200);  // Baud-Rate of communication
    //Serial2.begin(9600);  // Baud-Rate of communication for Bluetooth Module
    Homming_GoHome();
}

void loop() {
  TypeWriter_Print();
  Serial.println(EncoderPosition_X);
}
