// include a preprocessor directive  
#include <OneTouch.h>

//associate a button with a required pin (in my case 12)
OneTouch first_button(12);

void setup() {
  
 Serial.begin(300);

}

void loop() {
  // obtain a button state
  Serial.println(first_button.get_state());

}
