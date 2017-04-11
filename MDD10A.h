#ifndef MDD10A_h
#define MDD10A_h

#include <Arduino.h>

class MDD10A{
	
public:

	MDD10A();

	void setMotorSpeed(int controller, int speed);
	void init();

	int dir = 0;


	//PinOuts

	const int _mc0_dir0 = 6;
	const int _mc0_pwm0 = 5;
	const int _mc0_dir1 = 3;
	const int _mc0_pwm1 = 4;




};

#endif


