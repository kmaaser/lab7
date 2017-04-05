//stats.h
#pragma once
#include <iostream>
#ifndef __STATS__H
#define __STATS__H

//declarations of the methods

//returns average of numbers
double mean(double nums[], int n);

//returns median of numbers
double median(double nums[], int n);

//returns standard deviation of numbers
double standardDeviation(double nums[], int n);


//returns minimum of numbers
double min(double nums[], int n);


// returns maximum of numbers
double max(double nums[], int n);
#endif