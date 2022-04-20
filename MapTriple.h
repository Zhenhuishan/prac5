#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include <iostream>
#include <vector>
#include "MapGeneric.h"
using namespace std;

class MapTriple: public MapGeneric
{
private:
    int f(int);
public:
    MapTriple();
    // std::vector<int> map(std::vector<int>);
};
#endif
