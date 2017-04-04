// main.cpp
#include <iostream>
#include "stats.h"
using namespace std;

int main()
{
	double storedvalues;
	int number = 0, i;
	int vaule = 0;
	const int value2 = value;

	cout << "Enter number of values: ";
	cin >> value;
	int myarray[value];

	do {
		cout << "Enter number " << number + 1 << " : " << endl;
		cin >> storedvalues;
		
		for (i = 0; i < value; ++i) {
			myarray[i] = i;
		}
	} while(value > 0);

	cout << mean << endl;
	cout << median << endl;
	cout << standardDeviation << endl;
	cout << min << endl;
	cout << max << endl;
	return 0;
}