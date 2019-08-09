// Jerred Shepherd

#include <iostream>
using namespace std;

int gcd(int x, int y) {

	int t;

	t = x % y;

	while (t != 0) {

		x = y;
		y = t;

		t = x % y;

	}

	return y;

}

int lcm(int x, int y) {

	int cnt, ans;

	if (x > y) {

		cnt = x;

	}
	else {

		cnt = y;

	}

	ans = 0;

	while (ans == 0) {

		if (cnt % x == 0 && cnt % y == 0) {

			ans = cnt;

		}
		else {

			cnt++;

		}

	}

	return ans;

}

void reduce(int &num, int &den) {

	int divisor;

	divisor = gcd(num, den);

	num = num / divisor;
	den = den / divisor;

}

void common_den(int &num1, int &den1, int &num2, int &den2) {

	int cden;

	cden = lcm(den1, den2);

	num2 *= cden / den2;
	num1 *= cden / den1;

	den1 = cden;
	den2 = cden;

}

void main()
{
	int num1, den1, num2, den2, newnum, newden;
	char slash1, slash2, op;

	cout << "\nFraction Calculator\n\n";
	cout << "Add, subtract, multiply & divide - positive fractions only\n";
	cout << "Enter '0/0 + 0/0' to quit.\n";

	// Input will be assumed to be in correct form for simplification
	// Input data before loop in case they want to exit right away

	cout << "\n> ";
	cin >> num1 >> slash1 >> den1 >> op >> num2 >> slash2 >> den2;
	while (num1 + den1 + num2 + den2 > 0)
	{
		// Reduce both fractions to keep integers as small as possible
		reduce(num1, den1);
		reduce(num2, den2);
		switch (op) {
		case '+':
			// Find common denominator and add
			common_den(num1, den1, num2, den2);
			newnum = num1 + num2;
			newden = den1;
			break;
		case '-':
			// Find common denominator and subtract
			common_den(num1, den1, num2, den2);
			newnum = num1 - num2;
			newden = den1;
			break;
		case '*':
			// Multiply numerators and multiply denominators
			newnum = num1 * num2;
			newden = den1 * den2;
			break;
		case '/':
			// Invert and multiply
			newnum = num1 * den2;
			newden = den1 * num2;
		}
		// Reduce the answer to lowest terms
		reduce(newnum, newden);

		// Output the results
		cout << num1 << "/" << den1 << " " << op << " ";
		cout << num2 << "/" << den2 << " = ";
		cout << newnum << "/" << newden << endl;

		// Input data for next iteration of loop
		cout << "\n> ";
		cin >> num1 >> slash1 >> den1 >> op >> num2 >> slash2 >> den2;
	}

	system("pause");


}