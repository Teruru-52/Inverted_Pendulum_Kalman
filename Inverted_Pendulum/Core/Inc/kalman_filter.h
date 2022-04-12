#ifndef _KALMAN_FILTER_HPP_
#define _KALMAN_FILTER_HPP_
#include "main.h"
#include <vector>

class Kalman{
private:
	std::vector<std::vector<float>> A_theta { { 1, -1.00000e-03 }, { 0, 1 } };
	std::vector<std::vector<float>> B_theta { { 1.00000e-03 }, { 0 } };
	std::vector<std::vector<float>> C_theta { { 1, 0 } };
	std::vector<std::vector<float>> P_theta;
	const float W_theta = 0.001;
	const float U_theta = 0.001;
	std::vector<std::vector<float>> G_theta;
	std::vector<std::vector<float>> I2 { { 1, 0 }, { 0, 1 } };

	std::vector<std::vector<float>> A_x { { 1.00210e+00, 1.00070e-02, 0.00000e+00, 3.86060e-05 },
												{ 4.20288e-01, 1.00210e+00, 0.00000e+00, 7.65676e-03 },
												{ -1.15751e-01, -3.87467e-06, 1.00000e+00, 9.74129e-03 },
												{ -2.29569e-01, -1.15751e-03, 0.00000e+00, 9.48707e-01 } };
	std::vector<std::vector<float>> B_x { { -2.70805e-04 }, { -5.37090e-02 }, { 1.81472e-03 }, { 9.48707e-01 } };
	std::vector<std::vector<float>> C_x { { 1, 0, 0, 0 },
												{ 0, 1, 0, 0 },
												{ 0, 0, 1, 0 },
												{ 0, 0, 0, 1 } };
	std::vector<std::vector<float>> P_x;
	std::vector<std::vector<float>> W_x;
	std::vector<std::vector<float>> U_x;
	std::vector<std::vector<float>> G_x;
	std::vector<std::vector<float>> I4 { { 1, 0, 0, 0 },
											   { 0, 1, 0, 0 },
											   { 0, 0, 1, 0 },
											   { 0, 0, 0, 1 } };


public:
	Kalman();
	std::vector<float> UpdateEstimation();

	std::vector<float> theta_est;

};

#endif // _KALMAN_FILTER_HPP_
