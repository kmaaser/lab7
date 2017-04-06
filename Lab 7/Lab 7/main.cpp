// main.cpp
#include <iostream>
#include "stats.h"
using namespace std;

int main()
{
	// variables inialized
	double storedvalues;
	int number = 1;
	int value;

	//asks user for how many values they want to enter
	cout << "Enter number of values: ";
	cin >> value;

	//array is size 10000 because we can assume
	//no more than 10000 will be entered
	double myarray[10000];

	//making sure the numbers are added to myarray
	for (int i = 0; i < value; ++i) {
		cout << "Enter number " << number++ << ": ";
		cin >> storedvalues;
		myarray[i] = storedvalues;
	}
	//prints out the mean, median, standard deviation, min, max

	cout << "The mean is: " << mean(myarray, value) << endl;
	cout << "The median is: " << median(myarray, value) << endl;
	cout << "The standard Deviation is: " << standardDeviation(myarray, value) << endl;
	cout << "The minimum is: " << min(myarray, value) << endl;
	cout << "The maximum is: " << max(myarray, value) << endl;
	return 0;
}