#ifndef OUTPUT_ARDUINO
#define OUTPUT_ARDUINO
#include "Output.h"

class OutputArduino : public Output
{

private:
	char pin{0};

public:
	OutputArduino();
	~OutputArduino();
	bool setOutput(int& _output);
	bool setPin(char& _pin);
	char getPin();

};

#endif