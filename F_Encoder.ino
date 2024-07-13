// To convert the pulses to current Speed by RPM:
    #define PPR (360.0*4.0)
      
    // X-axis Encoder:
        #define ENCODER_CHANNEL_AX   2   // Channel(A)  [Interrupt]
        #define ENCODER_CHANNEL_BX   3   // Channel(B)  [Interrupt]
        volatile float EncoderPosition_X = 0.0;      // Initial Value

    // Y-axis Encoder:
        #define ENCODER_CHANNEL_AY  21   // Channel(A)  [Interrupt]
        #define ENCODER_CHANNEL_BY  20   // Channel(B)  [Interrupt]
        volatile float EncoderPosition_Y = 0.0;      // Initial Value

  // X-axis Interrupt function:
    void Encoder_AX() {
      int DirectX = digitalRead(ENCODER_CHANNEL_AX) == digitalRead(ENCODER_CHANNEL_BX);
      if( DirectX > 0 ) { EncoderPosition_X += 360.0/PPR;}   // CW
      else              { EncoderPosition_X -= 360.0/PPR;}   // CCW
    }
  
    void Encoder_BX() {
      int DirectX = digitalRead(ENCODER_CHANNEL_AX) == digitalRead(ENCODER_CHANNEL_BX);
      if( DirectX > 0 ) { EncoderPosition_X -= 360.0/PPR;}   // CW
      else              { EncoderPosition_X += 360.0/PPR;}   // CCW
    }
  
  // Y-axis Interrupt functions:
  /*
    void Encoder_AY() {
      int DirectY = digitalRead(ENCODER_CHANNEL_AY) == digitalRead(ENCODER_CHANNEL_BY);
      if( DirectY > 0 ) { EncoderPosition_Y -= 360/PPR; }   // CW
      else              { EncoderPosition_Y += 360/PPR; }   // CCW
    }
  
    void Encoder_BY() {
      int DirectY = digitalRead(ENCODER_CHANNEL_AY) == digitalRead(ENCODER_CHANNEL_BY);
      if( DirectY > 0 ) { EncoderPosition_Y += 360/PPR; }   // CW
      else              { EncoderPosition_Y -= 360/PPR; }   // CCW
    }
*/