// Parameters:
  #define CUREENT_SENSOR_PIN  A9
  #define RESISTOR  2.60

  float Saftey_Check=1.0;

  float input_volt, Volt_Drop, Current_FeedBack;
  
  void Current_Check() {
    input_volt = analogRead(CUREENT_SENSOR_PIN);
    Volt_Drop = map(input_volt,0,255,0,4.5);
    Current_FeedBack = Volt_Drop/RESISTOR;

    if( Current_FeedBack > 1.40 ) { Saftey_Check=0.0; }
  }