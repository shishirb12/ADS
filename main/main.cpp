#include <control.h>
#include <control.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <functional>


// all this is placeholders, will depend on actual functions 
// also I know we have a class for q shit I have it in terms of vectors right now sue me
int main{

	while(accelerating up) {
		std::vector<double> states = readSensors() 
		signal = find_u(states, 5150, 10, forwardIntegrate) //forward integrate is placeholder
		sendSignal(signal) // actuates servo
	}
}
