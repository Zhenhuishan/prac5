#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include <iostream>
#include <vector>
#include "FilterGeneric.h"
using namespace std;

class FilterForTwoDigitPositive: public FilterGeneric
{
private:
    bool g(int);
public:
    FilterForTwoDigitPositive(/* args */);
    
};
#endif



