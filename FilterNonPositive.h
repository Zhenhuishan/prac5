#ifndef FILTERPOSITIVE_H
#define FILTERPOSITIVE_H
#include <iostream>
#include <vector>
#include "FilterGeneric.h"
using namespace std;

class FilterNonPositive: public FilterGeneric
{
private:
    bool g(int);
public:
    FilterNonPositive(/* args */);
    
};
#endif



