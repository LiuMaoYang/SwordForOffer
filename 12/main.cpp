#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
	double Power(double base, int exponent) {
		int e = exponent;
		e = abs(exponent);
		double y = 1;
		while (e-->0) 
			y *= base;
		if (exponent < 0)
			y = 1 / y;
		return y;
	}
};

int  main() {
	Solution so;
	double base;
	int exp;
	cin >> base >> exp;
	double y = so.Power(base, exp);
	cout << base << "^" << exp << "=" << y << endl;
	getchar(); getchar();
	return 0;
}