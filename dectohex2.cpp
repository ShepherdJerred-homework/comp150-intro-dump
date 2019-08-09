// Decimal to hexidecimal alogorithm by Jerred Shepherd

#include <iostream>

using namespace std;

void main() {
	int n, p, d;

	cout << "Input n ";
	cin >> n;

	p = 1;

	while (p < n) {
		p = p * 16;
	}

	p = p / 16;

	do {
		if (n >= p) {
			d = n / p;
			n = n - d * p;

			if (d <= 9) {
				cout << d;
			} else {
				switch (d) {
				case 10: cout << "A";
					break;
				case 11: cout << "B";
					break;
				case 12: cout << "C";
					break;
				case 13: cout << "D";
					break;
				case 14: cout << "E";
					break;
				case 15: cout << "F";
				}
			}

		}
		else {
			cout << "0";
		}

		p = p / 16;

	} while (p > 0);

	cout << endl;

	system("pause");
}