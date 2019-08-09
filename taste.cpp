
#include <iostream>
using namespace std;

void main() {

	int coke, pepsi, pepper;
	char input;

	coke = 0;
	pepsi = 0;
	pepper = 0;

	cout << "Enter c for Coke, p for Pepsi, d for Dr. Pepper, or q to quit" << endl;
	cin >> input;

		while (input != 'q') {

			if (input == 'c' || input == 'C') {
				coke++;
			} else if (input == 'p' || input == 'P') {
				pepsi++;
			} else if (input == 'd' || input == 'D') {
				pepper++;
			}
			else {
				cout << "Invalid" << endl;
			}

			cout << "Enter c for Coke, p for Pepsi, d for Dr. Pepper, or q to quit" << endl;
			cin >> input;

		}

	if (pepsi == coke && pepsi == pepper) {
		cout << "Tie" << endl;
	} else {
		if (pepsi > coke && pepsi > pepper) {
			cout << "Pepsi Wins" << endl;
		} else if (coke > pepsi && coke > pepper) {
			cout << "Coke Wins" << endl;
		} else if (pepper > pepsi && pepper > coke) {
			cout << "Dr. Pepper Wins" << endl;
		}
	}

	system("pause");


}