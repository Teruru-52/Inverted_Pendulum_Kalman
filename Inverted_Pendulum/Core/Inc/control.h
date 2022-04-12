#ifndef _CONTROL_HPP_
#define _CONTROL_HPP_
#include "main.h"
#include <vector>

class Control{
private:
	std::vector<std::vector<float>> K_x { { 29.87522919 }, { 4.59857246 }, { 0.09293 }, { 0.37006248 } };

public:
	float CalcInput();

	std::vector<float> x_est;

};

#endif // _CONTROL_HPP_
