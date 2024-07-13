// to Control the MOTORS:
  #include <AFMotor.h>    // Adafruit Motor Shield library
  
  // Select which 'port' M1, M2, M3 or M4.
  AF_DCMotor Motor_X(1);
  AF_DCMotor Motor_Y(2);
  AF_DCMotor Motor_Z(3);

  // Parameters:
  #define MAX_MOTOR_RPM_X   150
  #define MAX_MOTOR_RPM_Y   150
  #define MAX_MOTOR_RPM_Z    90
    
  // Function:
    // put the value of speed with a sign that indicate the Direction" (+) forward, (-) backward "
    void DCMotor_SpeedControl_XY(float Speed_X, float Speed_Y) {
      if      (Speed_X > 0.0) { Motor_X.run(FORWARD);  }
      else if (Speed_X < 0.0) { Motor_X.run(BACKWARD); }
      else                    { Motor_X.run(RELEASE);  }

      if      (Speed_Y > 0.0) { Motor_Y.run(FORWARD);  }
      else if (Speed_Y < 0.0) { Motor_Y.run(BACKWARD); }
      else                    { Motor_Y.run(RELEASE);  }

      Speed_X = constrain(abs(Speed_X),100,255);
      Speed_Y = constrain(abs(Speed_Y),100,255);
      
      Motor_X.setSpeed(Speed_X*Saftey_Check);
      Motor_Y.setSpeed(Speed_Y*Saftey_Check);
    }