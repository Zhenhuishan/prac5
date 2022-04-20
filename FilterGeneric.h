#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>
#include <iostream>

class FilterGeneric
{
private:
    virtual bool g(int x)=0;
    std::vector<int> vec;   
    int count;
public:
    FilterGeneric(/* args */);
    std::vector<int> filter(std::vector<int>);
    ~FilterGeneric();
};
#endif
