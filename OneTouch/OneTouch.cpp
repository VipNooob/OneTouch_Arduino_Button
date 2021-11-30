#include <Arduino.h>
#include "OneTouch.h"

OneTouch::OneTouch(int button_pin) {
    flag = false;
    counter = 0;
    pin = button_pin;
	pinMode(pin, INPUT);
    
}

int OneTouch::get_state() {
    int state = digitalRead(pin);

    if (state == 1) {
        flag = true;
        counter++;
        if (counter > 254) {
            counter = 2;
        }
    }
    else {
        flag = false;
    }

    if (flag == true) {
        if (counter == 1) {
            state = 1;
        }
        else {
            state = 0;
        }
    }
    else {
        state = 0;
        counter = 0;
    }
    Serial.println(state);
    return state;
}

