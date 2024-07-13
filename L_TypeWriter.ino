// Recieve the input Message from user and Analysis it:
  void TypeWriter_Print() {
    text = Scan_Word();
    max_height = 1.5*font_size;
    
    EndEffector_Move_XYZ(START_X,START_Y,PEN_UP); // Start Point
    
    // Print the Text:
    for(int index=0; index<=sizeof(text); index++) {
      Print_Character(text[index]); // print the Character
      
      // Prepare for the Next Character:
      if(CursorPosition_x >= END_X) {   // if the line is FULL:
          CursorPosition_y -= (max_height + font_size);  // move Down
          CursorPosition_x = START_X;                    // back to the beginning of the line
      }
      else { CursorPosition_x += 1.50*font_size; }   // the space bet. each character in same line
      
      // Update the Coordinates:
      CurrentPosi_X = CursorPosition_x;
      CurrentPosi_Y = CursorPosition_y;
    }
    CursorPosition_x = END_X;
    Homming_GoHome();
  }