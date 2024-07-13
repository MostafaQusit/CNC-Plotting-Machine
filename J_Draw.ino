// make the basics of motion: [ALL of them Incremental motion]
    void Draw_Line(float xf, float yf) {
      xf *= font_size;
      yf *= font_size;
      // Send the Coordinates
      EndEffector_Move_XYZ( CursorPosition_x+xf , CursorPosition_y+yf , PEN_DOWN );
    }
///////////////////////////////////////////////////////////////////////////////////////////////

    void Draw_None(float xf, float yf) {
      xf *= font_size;
      yf *= font_size;
      // Send the Coordinates
      EndEffector_Move_XYZ( CursorPosition_x+xf , CursorPosition_y+yf , PEN_UP );
    }
///////////////////////////////////////////////////////////////////////////////////////////////

    void Draw_Arc(float xf, float yf, int dir) {     
      xf *= font_size;
      yf *= font_size;
      
      xf += CursorPosition_x;
      yf += CursorPosition_y;
      
      float yi= CurrentPosi_Y;
      float xi= CurrentPosi_X;
      
      float xn, yn;
      int quad=0;
      int signX=-1;
      int signY=-1;

      // Detect the Signs of the Axies:
      if (xf > CurrentPosi_X) {signX= 1;}
      if (yf > CurrentPosi_Y) {signY= 1;}

      // Detect the Quadrant:
      if ((signX== 1) && (signY== 1)) {quad=1;}
      if ((signX==-1) && (signY== 1)) {quad=2;}
      if ((signX==-1) && (signY==-1)) {quad=3;}
      if ((signX== 1) && (signY==-1)) {quad=4;}
      
      float R = abs( abs(xf)-abs(CurrentPosi_X));
      float arr[]={0.985, 0.94, 0.866, 0.766, 0.643, 0.5, 0.342, 0.174, 0};   // Resluations of the Arc
      
      for(int i=0; i<9; i++) {
        if ( ( (quad==1||quad==3)&&(dir==CW) ) || ( (quad==2||quad==4)&&(dir==CCW) ) ) {
         yn= yi + R*signY*arr[8-i]; 
         xn= xf - R*signX*arr[ i ]; 
        }
        else {
         yn= yf - R*signY*arr[ i ];
         xn= xi + R*signX*arr[8-i];
       }
       //Serial.print(xn); Serial.print("\t"); Serial.println(yn);
       EndEffector_Move_XYZ(xn,yn,PEN_DOWN);
     }
    }