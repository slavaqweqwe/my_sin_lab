// my_sin.cpp: определяет точку входа для приложения.
//

#include "my_sin.h"
#define twoPI 6.2832
using namespace std;

double testspace::Sin(double arg) {
	arg = arg - twoPI * int(arg / (twoPI));
	double arg_in_two = arg * arg;
	double res = 0, res_next = arg;
	double degree = 1;
	double  numerator = arg, denominator = 1;
	bool next_sign = 1;
	while (abs(res_next - res) > 0.0001) {
		res = res_next;

		degree += 2;
		numerator *= arg_in_two;
		denominator *= (degree * (degree - 1));
		if (next_sign)
			res_next -= numerator / denominator;
		else
			res_next += numerator / denominator;
		next_sign = !next_sign;
	}
	return res_next;
}