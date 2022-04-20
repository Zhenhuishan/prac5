#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include <iostream>
#include <vector>
#include "ReduceGeneric.h"
using namespace std;

class ReduceMinimum: public ReduceGeneric
{
private:
    int binaryOperator(int x,int y);
public:
    ReduceMinimum(/* args */);
    
};
#endif



