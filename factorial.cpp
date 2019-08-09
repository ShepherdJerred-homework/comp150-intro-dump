// Factorial alogorithm by Jerred Shepherd

#include <iostream>
using namespace std;

void main() {
	int n, a;

	cout << "What is N? ";
	cin >> n;

	a = 1;

	while (n > 1) {
		a = a * n;
		n = n - 1;
	}

	cout << "The answer is " << a << endl;

	system("pause");
}