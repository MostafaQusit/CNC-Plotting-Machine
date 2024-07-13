// to control the end-effector (Pen) positions to achieve the tasks:
    
    void EndEffector_Move_XYZ(float x_posi, float y_posi, int z_posi) {
      
      x_posi = constrain(x_posi,0,250);
      y_posi = constrain(y_posi,0,200);
      
      // convert from milli-meter scale to meter scale
      x_posi = x_posi/1.0e3;
      y_posi = y_posi/1.0e3;
      
      // convert the required distance to angle(Degree):
      float X_angle = (x_posi*180.0)/(PULLEY_RADIUS_M*PI);
      float Y_angle = (y_posi*180.0)/(PULLEY_RADIUS_M*PI);

      EXT_PositionControl_Z(z_posi);
      AngleControl_XY(X_angle,Y_angle);

      // Display:
      LinearPosition_X = (EncoderPosition_X*PI*PULLEY_RADIUS_M*1000.0)/180.0;
      LinearPosition_Y = (EncoderPosition_Y*PI*PULLEY_RADIUS_M*1000.0)/180.0;
      
      // Sortage the New Coordinates:
      CurrentPosi_X = x_posi*1000;
      CurrentPosi_Y = y_posi*1000;
   }