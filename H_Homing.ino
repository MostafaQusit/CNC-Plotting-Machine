// to start every time from the same point as a reference by 2 Limit Switchs

    // Limit Switches Pins: [ PULL-UP ]
          #define LIMIT_SW_X  27   // For the X-axis Motor
          #define LIMIT_SW_Y  31   // For the Y-axis Motor
      
    void Homming_GoHome() {
      EXT_PositionControl_Z(PEN_UP);  // Pen UP!!
      
      // Get them back until reach the limit switches:
      int HomingSpeed_Y = -130;
      int HomingSpeed_X = -130;
      int Home_x = 0;
      int Home_y = 0;

      
      while( !(Home_x && Home_y) ) { // untill finish homing
        
        // Stop when reach it's limit switch:
        if( !digitalRead(LIMIT_SW_Y) && !Home_y ) { HomingSpeed_Y = 0; Home_y=1; }
        if( !digitalRead(LIMIT_SW_X) && !Home_x ) { HomingSpeed_X = 0; Home_x=1; }
        DCMotor_SpeedControl_XY(HomingSpeed_X,HomingSpeed_Y);   // action:
      }

      // Zeroing the Reagings of the Encoder:
      EncoderPosition_X = 0;
      EncoderPosition_Y = 0;
      
      AlarmLights(GREEN_STATE);
      Serial.println("Home");
      delay(1000);
    }