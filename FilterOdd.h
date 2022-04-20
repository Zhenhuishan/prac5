#ifndef FILTERODD_H
#define FILTERODD_H
#include <iostream>
#include <vector>
#include "FilterGeneric.h"
using namespace std;

class FilterOdd: public FilterGeneric
{
private:
    bool g(int);
public:
    FilterOdd(/* args */);
    ~FilterOdd();
};
#endif



