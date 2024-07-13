// Position Control for the motors:
  // Parameters:
  #define TIME_MOTION     5
  #define TIME_DWELL     20
  #define SPEED_FACTOR  210

  void Pulsate (float speedX, float speedY) {
      DCMotor_SpeedControl_XY(speedX, speedY);  delay(TIME_MOTION);
      DCMotor_SpeedControl_XY(0,0);             delay(TIME_DWELL );
    }

  void AngleControl_XY(float X_Angle, float Y_Angle) {
      // Initial Position Recorded
      float prevAng_Y=EncoderPosition_Y;
      float prevAng_X=EncoderPosition_X;
      
      // Direction Indicators:
      int yDir=1;
      int xDir=1;
      
      // Slope Variables:
      float TargetSlope=(Y_Angle-EncoderPosition_Y+0.01)/(X_Angle-EncoderPosition_X+0.01);
      float CurrentSlope=0;
      float ErrorSlope=0;
      
      // Target Slope to Maintain
      //Serial.println(TargetSlope);
      //delay(1000);

      while( abs(Y_Angle-EncoderPosition_Y)>3 || abs(X_Angle-EncoderPosition_X)>3 ) {
        // Slope Re-Calculation:
        CurrentSlope = (EncoderPosition_Y-prevAng_Y+0.01) / (EncoderPosition_X-prevAng_X+0.01);

        /////////////////////////////////////////////////////////////////////
        
        // Direction of Pulses:
        if((Y_Angle-EncoderPosition_Y)>0) {yDir=+1;}
        else                              {yDir=-1;}
        
        if((X_Angle-EncoderPosition_X)>0) {xDir=+1;}
        else                              {xDir=-1;}
        /////////////////////////////////////////////////////////////////////
        
        // Monitoring:
        //Serial.print(yf-EncoderPosition_Y); Serial.print("\t");        
        //Serial.print(xf-EncoderPosition_X); Serial.print("\t"); 
        //Serial.println(CurrentSlope);
        /////////////////////////////////////////////////////////////////////
        //Serial.println(TargetSlope);
        ErrorSlope = abs(CurrentSlope) - abs(TargetSlope);
        
        if(abs(TargetSlope)<0.2) {
          if(abs(Y_Angle-EncoderPosition_Y)>3) { Pulsate( 0, yDir*SPEED_FACTOR); }
        }
        if(abs(TargetSlope)>20) {
          if(abs(X_Angle-EncoderPosition_X)>3) { Pulsate( xDir*1.2*SPEED_FACTOR, 0); }
        }
        
        /////////////////////////////////////////////////////////////////////
        
        if      ( ErrorSlope >  0.02)   { Pulsate( xDir*1.2*SPEED_FACTOR, 0                            ); }
        else if ( ErrorSlope < -0.02)   { Pulsate( 0                    , yDir*SPEED_FACTOR            ); }
        else                            { Pulsate( xDir*1.2*SPEED_FACTOR, yDir*SPEED_FACTOR*TargetSlope); }
        /////////////////////////////////////////////////////////////////////
        //Current_Check();


        /////////////////////////////////////////////////////////////////////
        // Stuck Condition
        if (abs(Y_Angle-EncoderPosition_Y)<3) { Pulsate( xDir*0.8*1.2*SPEED_FACTOR, 0                            ); }
        if (abs(X_Angle-EncoderPosition_X)<3) { Pulsate( 0                    , yDir*0.8*SPEED_FACTOR            ); }
      }
  } 
     
//+/+/+/+/+//+//+/+/+/+/+/+/+/+/+/+/+/+/

  // Extreme Position Contrller to control the (Z) Motor:
    // Initialisations:
    #define PEN_UP    0
    #define PEN_DOWN  1

    // Limit Switches:
    #define LIMIT_SW_UP     35  // 1
    #define LIMIT_SW_DOWN   39  // 2
    
    void EXT_PositionControl_Z(int Pen_State) {
      delay(200);
      Motor_Z.setSpeed(100*Saftey_Check);
      switch(Pen_State) {
        case PEN_UP:
            AlarmLights(YELLOW_STATE);
            while( digitalRead(LIMIT_SW_UP) ) { Motor_Z.run(FORWARD); }
            Motor_Z.run(RELEASE);
            break;
        case PEN_DOWN:
            AlarmLights(RED_STATE);
            Motor_Z.setSpeed( 65*Saftey_Check);
            Motor_Z.run(BACKWARD);
            break;
      }
      delay(350); // for check if pressed before moving
    }