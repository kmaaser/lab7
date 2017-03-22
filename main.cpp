// main.cpp
#include <iostream>
#include "stats.h"
using namespace std;

int main()
{
	double value, storedvalues;
	int number = 0;

	cout << "Enter number of values: ";
	cin >> value;

	do {
		cout << "Enter number " << number + 1 << " : " << endl;
		cin >> storedvalues;
	} while(value > 0);

	cout << mean << endl;
	cout << median << endl;
	cout << standardDeviation << endl;
	cout << min << endl;
	cout << max << endl;
	return 0;
}