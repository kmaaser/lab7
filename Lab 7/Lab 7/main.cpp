// main.cpp
#include <iostream>
#include "stats.h"
using namespace std;

int main()
{
	// variables inialized
	double storedvalues;
	int number = 1, i;
	double value;

	//asks user for how many values they want to enter
	cout << "Enter number of values: ";
	cin >> value;

	//array is size 10000 because we can assume
	//no more than 10000 will be entered
	int myarray[10000];

	//making sure the numbers are added to myarray
	for (int i = 0; i < value; ++i) {
		cout << "Enter number " << number++ << " : ";
		cin >> storedvalues;
		myarray[i] = storedvalues;
	}
	//prints out the mean, median, standard deviation, min, max

	cout << "The mean is: " << mean << endl;
	cout << "The median is: " << median << endl;
	cout << "The standard Deviation is: " << standardDeviation << endl;
	cout << "The minimum is: " << min << endl;
	cout << "The maximum is: " << max << endl;
	return 0;
}