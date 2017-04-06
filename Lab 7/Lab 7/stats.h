//stats.h
#pragma once
#include <iostream>
#ifndef __STATS__H
#define __STATS__H

class stats{
//declarations of the methods

//private helper methods
private:
  void sort(double nums[], int n);
  bool lessDouble(double v, double w);
  void exch(double nums[], int i, int j);

//public methods
public:

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
};
#endif
