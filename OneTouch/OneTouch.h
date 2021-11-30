#ifndef OneTouch_h
#define OneTouch_h

#include <Arduino.h>

class OneTouch {
public:
	OneTouch(int button_pin);
	int get_state();
private:

	bool flag;
	int counter;
	uint8_t pin;
};
#endif