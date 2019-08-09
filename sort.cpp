/*

Homework: Sorting Numbers
Author: Jerred Shepherd


20,000: .378 seconds
40,000: 1.531 seconds
80,000: 6.097 seconds


Date: 12-3-15
Course: COMP 150, 3:00

***********
Description
***********
Generates an inputted amount of random positive integers with an inputted max value,
prints the integers, sorts them from least to greatest value, and prints them again.

Also records/prints the time taken to sort the integers.

***************
Sample Dialogue
***************
Max? 10
How many? 10
8     9     9     1     7     5     5    10     1     0
0     1     1     5     5     7     8     9     9    10
Time = 0

*/

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Swap(int &a, int &b) {

	int c = a;
	a = b;
	b = c;

}

int GetMinPos(int numbers[], int first, int last) {

	int pos;

	int minpos = first;
	int minval = numbers[first];

	for (pos = first + 1; pos <= last; pos++) {

		if (numbers[pos] < minval) {

			minpos = pos;
			minval = numbers[pos];

		}

	}

	return minpos;

}

void SelSort(int numbers[], int quantity) {

	int minpos, pos;
	
	for (pos = 0; pos < quantity - 1; pos++) {

		minpos = GetMinPos(numbers, pos, quantity - 1);

		Swap(numbers[minpos], numbers[pos]);

	}

}

void displayList(int numbers[], int quantity) {

	for (int count = 1; count < quantity + 1; count++) {

		cout << setw(5) << numbers[count - 1] << " ";

		if (count % 10 == 0) {

			cout << endl;

		}

	}

}

void main() {

	const int maxarraysize = 80000;

	int quantity, max;
	int start, stop;
	int numbers[maxarraysize];

	cout << "Max? ";
	cin >> max;

	cout << "How many? ";
	cin >> quantity;

	// Generate numbers
	for (int count = 0; count < quantity; count++) {

		int num = rand() % (max + 1);

		numbers[count] = num;

	}

	// Print unsorted array
	displayList(numbers, quantity);

	// Start clock
	srand((unsigned)time(NULL));
	start = clock();

	SelSort(numbers, quantity);

	// Sort array, print array, print time
	stop = clock();

	displayList(numbers, quantity);

	cout << "Time = " << (float)(stop - start) / CLOCKS_PER_SEC << endl;

	system("pause");

}