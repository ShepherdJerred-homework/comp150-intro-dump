// Prime test alogorithm by Jerred Shepherd

#include <iostream>
using namespace std;

void main() {
	int x, p, d, r;

	cout << "What is X? ";
	cin >> x;

	p = 1;
	d = 2;

	while (d <= x - 1) {
		r = x % d;
		if (r == 0) {
			p = 0;
		}
		d = d + 1;
	}

	if (p == 1) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	system("pause");
}