// Square Root alogorithm by Jerred Shepherd

#include <iostream>
#include <math.h>

using namespace std;

void main() {
	float x, s, r;

	cout << "What is x? ";
	cin >> x;

	s = 2;

	r = (x / s + s) / s;

	while (fabs(r - s) >= .001) {
		s = r;
		r = (x / s + s) / 2;
	}

	cout << "The answer is " << r << endl;

	system("pause");
}