#include "OutputArduino.h"

bool setOutput(int& _output)
{
	if(_output!=0||_output!=1)
		return false;
	if(_output!=getValue())
	{
		digitalWrite(pin, _output);
		setValue(_output);
	}
	return true;
}

bool setPin(char& _pin)
{
	if(_pin>53)
		return false;
	pin=_pin;
	return true;
}

char getPin()
{
	return pin;
}