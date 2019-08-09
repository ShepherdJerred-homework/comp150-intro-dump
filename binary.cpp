// Binary alogorithm by Jerred Shepherd

#include <iostream>
#include <math.h>

using namespace std;

void main() {
	int p, num;
	char a;

	cout << "Convert a number to binary? ";
	cin >> a;

	while (a == 'y') {
		cout << "Input: ";
		cin >> num;

		p = 0;

		while (pow(2, p) <= num) {
			p++;
		}

		p--;

		while (p >= 0) {
			if (num >= pow(2, p)) {
				cout << "1";
				num = num - pow(2, p);
			} else {
				cout << "0";
			}

			p--;
		}

		cout << endl << "Convert a number to binary? ";
		cin >> a;
	}

	system("pause");
}