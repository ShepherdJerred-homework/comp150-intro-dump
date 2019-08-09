// LCM alogorithm by Jerred Shepherd

#include <iostream>
using namespace std;

void main() {
	int x, y, d, n;

	cout << "What is X? ";
	cin >> x;

	cout << "What is Y? ";
	cin >> y;

	d = 0;
	n = 1;

	while (d == 0) {
		while (n % x != 0) {
			n++;
		}

		if (n % y == 0) {
			d = 1;
		} else {
			n = n + 1;
		}
	}

	cout << "The answer is " << n << endl;

	system("pause");
}