// Parameters:
  #define RED_STATE     0
  #define YELLOW_STATE  1
  #define GREEN_STATE   2

  #define RED_PIN     53
  #define YELLOW_PIN  23
  #define GREEN_PIN   25

  void AlarmLights(int alarm_state) {
    switch (alarm_state) {
      case RED_STATE:     digitalWrite(RED_PIN,HIGH);   digitalWrite(YELLOW_PIN,LOW );   digitalWrite(GREEN_PIN,LOW );   break;
      case YELLOW_STATE:  digitalWrite(RED_PIN,LOW );   digitalWrite(YELLOW_PIN,HIGH);   digitalWrite(GREEN_PIN,LOW );   break;
      case GREEN_STATE:   digitalWrite(RED_PIN,LOW );   digitalWrite(YELLOW_PIN,LOW );   digitalWrite(GREEN_PIN,HIGH);   break;
    }
  }
