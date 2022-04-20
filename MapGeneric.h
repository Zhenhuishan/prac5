#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <iostream>
#include <vector>

class MapGeneric
{
private:
    virtual int f(int)=0;
    std::vector<int> vec;  
    int count;
public:
    MapGeneric();
    std::vector<int> map(std::vector<int>);
};
#endif
