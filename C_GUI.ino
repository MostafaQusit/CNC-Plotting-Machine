// Create our own mobile app using MIT website feature  
  // Parameters:
    #define TxD 16
    #define RxD 17
  
  String Scan_Word()  {
    String incoming = (String) NULL;
    String Text     = (String) NULL;
    String font     = (String) NULL;
    char encoding;
    do{
      while(!Serial2.available()) {}  // wait for serial port to connect
      incoming = Serial2.readString();
      encoding = incoming.charAt(0);
      
      if ( encoding == 'F' ) {   // Recieve the Font Size
        font = incoming.substring(1);
        font_size = font.toInt();
      }
      else if (encoding == 'T' ) {  // Recieve the Text
        Text = incoming.substring(1);
      }
    } while(Text == (String) NULL);
    AlarmLights(YELLOW_STATE);
    return Text;
  }