//stats.h
#pragma once
#include <iostream>
using namespace std;
#ifndef __STATS__H
#define __STATS__H

class Stats;
	//declarations of the methods
	//returns average of numbers
	double mean(double nums[], int n);
	//pre must be more than 0 numbers
	//post returns the mean of the numbers

	//returns median of numbers
	double median(double nums[], int n);
	//pre must be more than 0 numbers
	// post reutnrs the median

	//returns standard deviation of numbers
	double standardDeviation(double nums[], int n);

	//returns minimum of numbers
	double min(double nums[], int n);
	//pre must be at least 1 number
	//post returns the smallest number

	// returns maximum of numbers
	double max(double nums[], int n);
	//pre must be at least 1 number
	//post returns the largest number
#endif