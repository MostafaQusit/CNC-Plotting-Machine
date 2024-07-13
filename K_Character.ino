// Convert the Letters to Drawing:
void Print_Character(char character) {
  Draw_None(0.00,0.00);
  switch(character) {
    // Letters:
        // Capital:
            case 'A': { // 01
                Draw_Line(0.50,1.50);
                Draw_Line(1.00,0.00);
                Draw_None(0.86,0.42);
                Draw_Line(0.14,0.42);
                break; }
            case 'B': { // 02
                Draw_None(0.00,0.83);
                Draw_Line(0.42,0.83);
                Draw_Arc (0.42,1.50,CCW);
                Draw_Line(0.00,1.50);
                Draw_Line(0.00,0.00);
                Draw_Line(0.42,0.00);
                Draw_Arc (0.42,0.83,CCW);
                break; }
            case 'C': { // 03
                Draw_None(0.67,0.00);
                Draw_Line(0.42,0.00);
                Draw_Arc (0.00,0.42,CW);
                Draw_Line(0.00,1.08);
                Draw_Arc (0.42,1.50,CW);
                Draw_Line(0.67,1.50);
                break; }
            case 'D': { // 04
                Draw_Line(0.00,1.50);
                Draw_Line(0.42,1.50);
                Draw_Arc (0.83,1.08,CW);
                Draw_Line(0.83,0.42);
                Draw_Arc (0.42,0.00,CW);
                Draw_Line(0.00,0.00);
                break; }
            case 'E': { // 05
                Draw_None(0.67,0.00);
                Draw_Line(0.00,0.00);
                Draw_Line(0.00,0.83);
                Draw_Line(0.50,0.83);
                Draw_None(0.00,0.83);
                Draw_Line(0.00,1.50);
                Draw_Line(0.67,1.50);
                break; }
            case 'F': { // 06
                Draw_Line(0.00,0.00);
                Draw_Line(0.00,0.83);
                Draw_Line(0.67,0.83);
                Draw_None(0.00,0.83);
                Draw_Line(0.00,1.50);
                Draw_Line(0.67,1.50);
                break; }
            case 'G': { // 07
                Draw_None(0.67,0.83);
                Draw_Line(0.83,0.83);
                Draw_Line(0.83,0.00);
                Draw_Line(0.42,0.00);
                Draw_Arc (0.00,0.42,CW);
                Draw_Line(0.00,1.08);
                Draw_Arc (0.42,1.50,CW);
                Draw_Line(0.83,1.50);
                break; }
            case 'H': { // 08
                Draw_Line(0.00,1.50);
                Draw_None(0.00,0.83);
                Draw_Line(0.83,0.83);
                Draw_None(0.83,0.00);
                Draw_Line(0.83,1.50);
                break; }
            case 'I': { // 09
                Draw_None(0.08,0.00);
                Draw_Line(0.08,1.50);
                break; }
            case 'J': { // 10
                Draw_None(0.08,0.00);
                Draw_Arc (0.50,0.42,CCW);
                Draw_Line(0.50,1.50);
                break; }
            case 'K': { // 11
                Draw_Line(0.00,1.50);
                Draw_None(0.00,0.67);
                Draw_Line(0.83,1.50);
                Draw_None(0.17,0.83);
                Draw_Line(0.83,0.00);
                break; }
            case 'L': { // 12
                Draw_None(0.00,1.50);
                Draw_Line(0.00,0.00);
                Draw_Line(0.67,0.00);
                break; }
            case 'M': { // 13
                Draw_Line(0.00,1.50);
                Draw_Line(0.50,0.67);
                Draw_Line(1.00,1.50);
                Draw_Line(1.00,0.00);
                break; }
            case 'N': { // 14
                Draw_Line(0.00,1.50);
                Draw_Line(0.83,0.00);
                Draw_Line(0.83,1.50);
                break; }
            case 'O': { // 15
                Draw_None(0.00,1.08);
                Draw_Arc (0.42,1.50,CW);
                Draw_Arc (0.83,1.08,CW);
                Draw_Line(0.83,0.42);
                Draw_Arc (0.42,0.00,CW);
                Draw_Arc (0.00,0.42,CW);
                Draw_Line(0.00,1.08);
                break; }
            case 'P': { // 16
                Draw_Line(0.00,1.50);
                Draw_Line(0.42,1.50);
                Draw_Arc (0.83,1.08,CW); //
                Draw_Arc (0.42,0.67,CW);
                Draw_Line(0.00,0.67);
                break; }
            case 'Q': { // 17
                Draw_None(0.00,1.08);
                Draw_Arc (0.42,1.50,CW);
                Draw_Arc (0.83,1.08,CW);
                Draw_Line(0.83,0.42);
                Draw_Arc (0.42,0.00,CW);
                Draw_Arc (0.00,0.42,CW);
                Draw_Line(0.00,1.08);
                Draw_None(0.50,0.33);
                Draw_Line(1.00,0.00);
                break; }
            case 'R': { // 18
                Draw_Line(0.00,1.50);
                Draw_Line(0.42,1.50);
                Draw_Arc (0.83,1.08,CW);
                Draw_Arc (0.42,0.67,CW);
                Draw_Line(0.00,0.67);
                Draw_None(0.42,0.67);
                Draw_Line(0.83,0.00);
                break; }
            case 'S': { // 19
                Draw_None(0.00,0.42);
                Draw_Arc (0.42,0.00,CCW);
                Draw_Arc (0.83,0.42,CCW);
                Draw_Arc (0.42,0.83,CCW);
                Draw_Arc (0.09,1.17, CW);
                Draw_Arc (0.42,1.50, CW);
                Draw_Arc (0.75,1.17, CW);
                break; }
            case 'T': { // 20
                Draw_None(0.00,1.50);
                Draw_Line(0.83,1.50);
                Draw_None(0.42,1.50);
                Draw_Line(0.42,0.00);
                break; }
            case 'U': { // 21
                Draw_None(0.00,1.50);
                Draw_Line(0.00,0.42);
                Draw_Arc (0.42,0.00,CCW);
                Draw_Arc (0.83,0.42,CCW);
                Draw_Line(0.83,1.50);
                break; }
            case 'V': { // 22
                Draw_None(0.00,1.50);
                Draw_Line(0.50,0.00);
                Draw_Line(1.00,1.50);
                break; }
            case 'W': { // 23
                Draw_None(0.00,1.50);
                Draw_Line(0.33,0.00);
                Draw_Line(0.67,1.00);
                Draw_Line(1.00,0.00);
                Draw_Line(1.33,1.50);
                break; }
            case 'X': { // 24
                Draw_Line(1.00,1.50);
                Draw_None(0.00,1.50);
                Draw_Line(1.00,0.00);
                break; }
            case 'Y': { // 25
                Draw_None(0.00,1.50);
                Draw_Line(0.50,0.83);
                Draw_Line(0.50,0.00);
                Draw_None(0.50,0.83);
                Draw_Line(1.00,1.50);
                break; }
            case 'Z': { // 26
                Draw_None(0.00,1.50);
                Draw_Line(1.00,1.50);
                Draw_Line(0.00,0.00);
                Draw_Line(1.00,0.00);
                break; }
        // Small:
            case 'a': { // 01
                Draw_None(0.00,1.00);
                Draw_Line(0.42,1.00);
                Draw_Arc (0.67,0.75,CW);
                Draw_Line(0.67,0.00);
                Draw_Line(0.25,0.00);
                Draw_Arc (0.25,0.50,CW);
                Draw_Line(0.67,0.50);
                break; }
            case 'b': { // 02
                Draw_None(0.00,1.50);
                Draw_Line(0.00,0.00);
                Draw_Line(0.42,0.00);
                Draw_Arc (0.67,0.25,CCW);
                Draw_Line(0.67,0.75);
                Draw_Arc (0.42,1.00,CCW);
                Draw_Line(0.00,1.00);
                break; }
            case 'c': { // 03
                Draw_None(0.50,0.00);
                Draw_Line(0.33,0.00);
                Draw_Arc (0.00,0.33,CW);
                Draw_Line(0.00,0.67);
                Draw_Arc (0.33,1.00,CW);
                Draw_Line(0.50,1.00);
                break; }
            case 'd': { // 04
                Draw_None(0.67,1.50);
                Draw_Line(0.67,0.00);
                Draw_Line(0.25,0.00);
                Draw_Arc (0.00,0.25,CW);
                Draw_Line(0.00,0.75);
                Draw_Arc (0.25,1.00,CW);
                Draw_Line(0.67,1.00);
                break; }
            case 'e': { // 05
                Draw_None(0.00,0.50);
                Draw_Line(0.67,0.50);
                Draw_Line(0.67,0.67);
                Draw_Arc (0.33,1.00,CCW);
                Draw_Arc (0.00,0.67,CCW);
                Draw_Line(0.00,0.25);
                Draw_Arc (0.25,0.00,CCW);
                Draw_Line(0.67,0.00);
                break; }
            case 'f': { // 06
                Draw_None(0.17,0.00);
                Draw_Line(0.17,1.17);
                Draw_Arc (0.50,1.50,CW);
                Draw_None(0.00,1.00);
                Draw_Line(0.50,1.00);
                break; }
            case 'g': { // 07
                Draw_None(0.00,-0.50);
                Draw_Line(0.42,-0.50);
                Draw_Arc (0.67,-0.25,CCW);
                Draw_Line(0.67,+1.00);
                Draw_Line(0.25,+1.00);
                Draw_Arc (0.00,+0.75,CCW);
                Draw_Line(0.00,+0.25);
                Draw_Arc (0.25, 0.00,CCW);
                Draw_Line(0.67, 0.00);
                break; }
            case 'h': { // 08
                Draw_Line(0.00,1.50);
                Draw_None(0.00,1.00);
                Draw_Line(0.42,1.00);
                Draw_Arc (0.67,0.75,CW);
                Draw_Line(0.67,0.00);
                break; }
            case 'i': { // 09
                Draw_None(0.08,0.00);
                Draw_Line(0.08,1.00);
                Draw_None(0.08,1.42);
                Draw_Line(0.08,1.50);
                break; }
            case 'j': { // 10
                Draw_None(-0.25,-0.50);
                Draw_Arc (+0.08,-0.17,CW);
                Draw_Line(+0.08,+1.00);
                Draw_None(+0.08,+1.42);
                Draw_Line(+0.08,+1.50);
                break; }
            case 'k': { // 11
                Draw_Line(0.00,1.50);
                Draw_None(0.00,0.33);
                Draw_Line(0.67,1.00);
                Draw_None(0.17,0.50);
                Draw_Line(0.67,0.00);
                break; }
            case 'l': { // 12
                Draw_None(0.00,1.50);
                Draw_Line(0.00,0.17);
                Draw_Arc (0.17,0.00,CCW);
                break; }
            case 'm': { // 13
                Draw_Line(0.00,1.00);
                Draw_Line(0.50,1.00);
                Draw_Line(0.50,0.00);
                Draw_None(0.50,1.00);
                Draw_Line(0.75,1.00);
                Draw_Arc (1.00,0.75,CW);
                Draw_Line(1.00,0.00);
                break; }
            case 'n': { // 14
                Draw_Line(0.00,1.00);
                Draw_Line(0.42,1.00);
                Draw_Arc (0.67,0.75,CW);
                Draw_Line(0.67,0.00);
                break; }
            case 'o': { // 15
                Draw_None(0.00,0.67);
                Draw_Arc (0.33,1.00,CW);
                Draw_Arc (0.67,0.67,CW);
                Draw_Line(0.67,0.33);
                Draw_Arc (0.33,0.00,CW);
                Draw_Arc (0.00,0.33,CW);
                Draw_Line(0.00,0.67);
                break; }
            case 'p': { // 16
                Draw_None(0.67,-0.50);
                Draw_Line(0.00,+1.00);
                Draw_Line(0.42,+1.00);
                Draw_Arc (0.67,+0.75,CW);
                Draw_Line(0.67,+0.25);
                Draw_Arc (0.42, 0.00,CW);
                Draw_Line(0.00, 0.00);
                break; }
            case 'q': { // 17
                Draw_None(0.67,-0.50);
                Draw_Line(0.67,+1.00);
                Draw_Line(0.25,+1.00);
                Draw_Arc (0.00,+0.75,CCW);
                Draw_Line(0.00,+0.25);
                Draw_Arc (0.25, 0.00,CCW);
                Draw_Line(0.67, 0.00);
                break; }
            case 'r': { // 18
                Draw_Line(0.00,1.00);
                Draw_Line(0.25,1.00);
                Draw_Arc (0.50,0.75,CW);
                break; }
            case 's': { // 19
                Draw_None(0.00,0.25);
                Draw_Arc (0.25,0.00,CCW);
                Draw_Line(0.42,0.00);
                Draw_Arc (0.67,0.25,CCW);
                Draw_Arc (0.42,0.50,CCW);
                Draw_Line(0.25,0.50);
                Draw_Arc (0.00,0.75, CW);
                Draw_Arc (0.25,1.00, CW);
                Draw_Line(0.42,1.00);
                Draw_Arc (0.67,0.75, CW);
                break; }
            case 't': { // 20
                Draw_None(0.12,0.00);
                Draw_Line(0.12,1.50);
                Draw_None(0.00,1.00);
                Draw_Line(0.50,1.00);
                break; }
            case 'u': { // 21
                Draw_None(0.00,1.00);
                Draw_Line(0.00,0.25);
                Draw_Arc (0.25,0.00,CCW);
                Draw_Line(0.67,0.00);
                Draw_Line(0.67,1.00);
                break; }
            case 'v': { // 22
                Draw_None(0.00,1.00);
                Draw_Line(0.33,0.00);
                Draw_Line(0.67,1.00);
                break; }
            case 'w': { // 23
                Draw_None(0.00,1.00);
                Draw_Line(0.25,0.00);
                Draw_Line(0.50,0.67);
                Draw_Line(0.75,0.00);
                Draw_Line(1.00,1.00);
                break; }
            case 'x': { // 24
                Draw_Line(0.67,1.00);
                Draw_None(0.00,1.00);
                Draw_Line(0.67,0.00);
                break; }
            case 'y': { // 25
                Draw_None(0.00,+1.00);
                Draw_Line(0.33, 0.00);
                Draw_None(0.12,-0.50);
                Draw_Line(0.67,+1.00);
                break; }
            case 'z': { // 26
                Draw_None(0.00,1.00);
                Draw_Line(0.67,1.00);
                Draw_Line(0.00,0.00);
                Draw_Line(0.67,0.00);
                break; }
    // Numbers:
        case '0': { // 00
            Draw_None(0.00,1.17);
            Draw_Arc (0.33,1.50,CW);
            Draw_Arc (0.67,1.17,CW);
            Draw_Line(0.67,0.33);
            Draw_Arc (0.33,0.00,CW);
            Draw_Arc (0.00,0.33,CW);
            Draw_Line(0.00,1.17);
            break; }
        case '1': { // 01
            Draw_None(0.00,1.17);
            Draw_Line(0.33,1.50);
            Draw_Line(0.33,0.00);
            break; }
        case '2': { // 02
            Draw_None(0.00,1.17);
            Draw_Arc (0.33,1.50,CW);
            Draw_Arc (0.62,1.17,CW);
            Draw_Line(0.00,0.00);
            Draw_Line(0.67,0.00);
            break; }
        case '3': { // 03
            Draw_None(0.00,1.50);
            Draw_Line(0.42,1.50);
            Draw_Arc (0.67,1.25,CW);
            Draw_Line(0.67,1.08);
            Draw_Arc (0.42,0.83,CW);
            Draw_Line(0.17,0.83);
            Draw_None(0.42,0.83);
            Draw_Arc (0.67,0.58,CW);
            Draw_Line(0.67,0.25);
            Draw_Arc (0.42,0.00,CW);
            Draw_Line(0.00,0.00);
            break; }
        case '4': { // 04
            Draw_None(0.33,1.50);
            Draw_Line(0.00,0.33);
            Draw_Line(0.67,0.33);
            Draw_None(0.58,0.00);
            Draw_Line(0.58,0.67);
            break; }
        case '5': { // 05
            Draw_Line(0.42,0.00);
            Draw_Arc (0.67,0.25,CCW);
            Draw_Line(0.67,0.58);
            Draw_Arc (0.42,0.83,CCW);
            Draw_Line(0.00,0.83);
            Draw_Line(0.00,1.50);
            Draw_Line(0.67,1.50);
            break; }
        case '6': { // 06
            Draw_None(0.00,0.50);
            Draw_Arc (0.33,0.83,CW);
            Draw_Arc (0.67,0.50,CW);
            Draw_Line(0.67,0.33);
            Draw_Arc (0.33,0.00,CW);
            Draw_Arc (0.00,0.33,CW);
            Draw_Line(0.00,0.50);
            Draw_Arc (1.00,1.50,CW);
            break; }
        case '7': { // 07
            Draw_None(0.00,1.50);
            Draw_Line(0.67,1.50);
            Draw_Line(0.25,0.00);
            Draw_None(0.33,0.83);
            Draw_Line(0.67,0.83);
            break; }
        case '8': { // 08
            Draw_None(0.33,0.83);
            Draw_Arc (0.67,1.17,CCW);
            Draw_Arc (0.33,1.50,CCW);
            Draw_Arc (0.00,1.17,CCW);
            Draw_Arc (0.33,0.83,CCW);
            Draw_Arc (0.67,0.50, CW);
            Draw_Line(0.67,0.33);
            Draw_Arc (0.33,0.00, CW);
            Draw_Arc (0.00,0.33, CW);
            Draw_Line(0.00,0.50);
            Draw_Arc (0.33,0.83, CW);
            break; }
        case '9': { // 09
            Draw_None(0.17,0.00);
            Draw_Arc (0.67,1.00,CCW);
            Draw_Line(0.67,1.17);
            Draw_Arc (0.33,0.83, CW);
            Draw_Arc (0.00,1.17, CW);
            Draw_Line(0.00,1.00);
            Draw_Arc (0.33,1.33,CCW);
            Draw_Arc (0.67,1.00,CCW);
            break; }
   // Others:
        case '-': {
            Draw_None(0.00,0.67);
            Draw_Line(0.67,0.67);
            break; }
        case '+': {
            Draw_None(0.00,0.67);
            Draw_Line(0.67,0.67);
            Draw_None(0.33,1.00);
            Draw_Line(0.33,0.33);
            break; }
        case '=': {
            Draw_None(0.00,0.25);
            Draw_Line(0.67,0.25);
            Draw_None(0.00,0.58);
            Draw_Line(0.67,0.58);
            break; }
        case '/': {
            Draw_Line(0.83,1.50);
            break; }
        case '!': {
            Draw_Line(0.00,0.00);
            Draw_None(0.00,0.50);
            Draw_Line(0.00,1.50);
            break; }
        case ':': {
            Draw_None(0.00,0.33);
            Draw_Line(0.08,0.33);
            Draw_None(0.00,1.00);
            Draw_Line(0.08,1.00);
            break; }
        case ';': {
            Draw_None(0.00,0.33);
            Draw_Line(0.17,0.50);
            Draw_None(0.08,1.00);
            Draw_Line(0.17,1.00);
            break; }
        case ',': {
            Draw_None(0.17, 0.00);
            Draw_Line(0.08,-0.17);
            break; }
        case '_': {
            Draw_Line(1.00,0.00);
            break; }
        case ' ': { // Make Nothing - Space = 2*SPACING_CHARACTER
            break; }
        case '\n': { // Enter(new line) = Reach the end of this line
            CursorPosition_x = END_X;
            break; }
  }
  EXT_PositionControl_Z(PEN_UP); // Pen Up
}