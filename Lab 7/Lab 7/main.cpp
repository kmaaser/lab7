// main.cpp
#include <iostream>
#include "stats.h"
using namespace std;

int main()
{
	// variables inialized
	double storedvalues;
	int number = 0, i;
	int value;

	//asks user for how many values they want to enter
	cout << "Enter number of values: " << endl;
	cin >> value;

	//array is size 10000 because we can assume
	//no more than 10000 will be entered
	int myarray[10000];

	//making sure the numbers are added to myarray
	for (int i = 0; i < value; ++i) {
		cout << "Enter number " << number + 1 << " : " << endl;
		cin >> storedvalues;
		myarray[i] = storedvalues;
	}
	//prints out the mean, median, standard deviation, min, max
	cout << mean << endl;
	cout << median << endl;
	cout << standardDeviation << endl;
	cout << min << endl;
	cout << max << endl;
	return 0;
}