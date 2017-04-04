// main.cpp
#include <iostream>
#include "stats.h"
using namespace std;

int main()
{
	double storedvalues;
	int number = 0, i;
	int value;
	
	cout << "Enter number of values: " << endl;
	cin >> value;

	int myarray[10000];
	for (int i = 0; i < value; ++i) {
		cout << "Enter number " << number + 1 << " : " << endl;
		cin >> storedvalues;
		myarray[i] = storedvalues;
	}

	cout << mean << endl;
	cout << median << endl;
	cout << standardDeviation << endl;
	cout << min << endl;
	cout << max << endl;
	return 0;
}