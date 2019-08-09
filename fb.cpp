// Jerred Shepherd, findbal homework

#include <iostream>
using namespace std;

void FindBal(int id[], float bal[], int idtofind, int &found, float &result) {

	for (int counter = 0; counter != 5; counter++) {

		if (id[counter] == idtofind) {

			found = 1;
			result = bal[counter];

			return;

		}

		found = 0;

	}

}

void main()
{
	int id[5] = { 123, 234, 333, 401, 500 };
	float bal[5] = { 0.0, 100.0, 250.0, 50.0, 1225.0 };
	float result;
	int idtofind, found;

	cout << "ID to find? ";
	cin >> idtofind;

	while (idtofind > 0)
	{
		FindBal(id, bal, idtofind, found, result);
		if (found)
			cout << "The balance is " << result << endl;
		else
			cout << "Not found";

		cout << "ID to find? ";
		cin >> idtofind;
	}
}