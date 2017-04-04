// stats.cpp
#include "stats.h"

double mean(double nums[], int n)
{
	double avg = 0, sum = 0;
	int size;
	size = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < size, ++i) {
		sum += nums[i];
	}
	avg = ((float)sum) / size;
	return avg;
}
double median(double nums[], int n)
{
	int mid;
	double average, med;

	mid = n / 2.0;

	if (n % 2) {
		med = (nums[mid] + nums[mid + 1]) / 2.0;
	}
	else {
		med = nums[mid + 1];
	}

	return med;
}
double standardDeviation(double nums[], int n)
{

}
double min(double nums[], int n)
{
	int smallest = nums[0];

	for(int i = 0; i < n; ++i) {
		if (nums[i] < smallest) {
			smallest = nums[i];
		}
	}
	return smallest;
}
double max(double nums[], int n)
{
	int largest = nums[0];

	for (int i = 0; i < n; ++i) {
		if (nums[i] > largest) {
			largest = nums[i];
		}
	}
	return largest;
}