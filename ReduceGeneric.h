#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <vector>

class ReduceGeneric
{
private:
    virtual int binaryOperator(int x,int y)=0;
    // std::vector<int> vec;
    int result;   
    int count;
public:
    ReduceGeneric(/* args */);
    int reduce(std::vector<int>);
    ~ReduceGeneric();
};
#endif
