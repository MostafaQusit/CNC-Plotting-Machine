// Libraries:
  #include "String.h"
  
// Parameters:
    #define PULLEY_RADIUS_M   (6.4/1.0e3)
    
// Initialisations:
    #define CW  -1
    #define CCW +1

    #define START_X    10
    #define START_Y   100
    
    #define END_X   200
    #define END_Y    50

    float CursorPosition_x=START_X, CursorPosition_y=START_Y;
    
    float CurrentPosi_X = CursorPosition_x;
    float CurrentPosi_Y = CursorPosition_y;

    float LinearPosition_X = 0.0;
    float LinearPosition_Y = 0.0;
    
    float  font_size, max_height;
    String text;