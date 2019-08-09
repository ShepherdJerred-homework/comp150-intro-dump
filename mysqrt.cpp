// mysqrt function by Jerred Shepherd

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// mysqrt function
// Calculates the square root of the given float
float mysqrt(float input) {
		float s, result;

		s = 2;

		result = (input / s + s) / 2;

		while (fabs(result - s) >= .001) {
			s = result;
			result = (input / s + s) / 2;
		}

		return result;

}

void main() {
	float cnt;
	
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(5);

	for (cnt = 1; cnt <= 16; cnt++) {

		cout << setw(10) << cnt;
		cout << setw(10) << sqrt(cnt);
		cout << setw(10) << mysqrt(cnt);
		cout << endl;

	}

	system("pause");

}