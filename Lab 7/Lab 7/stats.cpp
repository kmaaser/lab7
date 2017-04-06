// stats.cpp
#include <iostream>
using namespace std;
#include "stats.h"

double mean(double nums[], int n)
{
	//initalize variables
	double avg = 0.0, sum = 0.0;

	//going through the array and adding the number
	//at that spot to the sum
	for (int i = 0; i < n; ++i) {
		sum += nums[i];
	}
	//average is the sum of all the numbers
	//divided by how many numbers there are
	avg = sum / n;
	return avg;
}
double median(double nums[], int n)
{
	double med;
	
	if ((n % 2) == 0) {
		med = (nums[n / 2] + nums[(n / 2) - 1]) / 2.0;
	}
	else {
		med = nums[n / 2];
	}
	return med;
}

private void sort(double nums[], int n)
{
	for(int i = 1; i < n; ++i)
	{
		for(int j = i; j > 0 && less(nums[j]; nums[j-1]; --j)
		    {
			    exch(a,j,j-1);
		    }
	}
}
		    
private boolean less(double v, double w)
{
	return v<w;
}
		    
private void exch(double nums[], int i, int j)
{
	double t = nums[i];
	nums[i] = nums[j];
	nums[j] = t;
}

double standardDeviation(double nums[], int n)
{
	//initalize variables
	double standardDeviation = 0.0;

	//giving starting values for varibables
	double avg = 0.0, sum = 0.0;

	for (int i = 0; i < n; ++i) {
		sum += nums[i];
	}
	avg = sum / n;

	for (int i = 0; i < n; ++i) {
		standardDeviation += pow(nums[i] - avg, 2);
	}

	return sqrt(standardDeviation / n);
}
double min(double nums[], int n)
{
	//initalize variables
	//setting the first item in the array to position 0
	int smallest = nums[0];

	//for loop going though the array
	//also comparing values
	//if a new smaller number is found
	//it is replaced
	for(int i = 0; i < n; ++i) {
		if (nums[i] < smallest) {
			smallest = nums[i];
		}
	}
	return smallest;
}
double max(double nums[], int n)
{
	//initalize variables
	//setting the largest to the first position
	int largest = nums[0];

	//for loop to go through the array
	//compares values to find the largest
	//if a new larger number is found
	//it is set to the new largest number
	for (int i = 0; i < n; ++i) {
		if (nums[i] > largest) {
			largest = nums[i];
		}
	}
	return largest;
}
