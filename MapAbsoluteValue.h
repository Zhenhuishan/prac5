#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include <iostream>
#include <vector>
#include "MapGeneric.h"
using namespace std;

class MapAbsoluteValue: public MapGeneric
{
private:
    int f(int);
public:
    MapAbsoluteValue();
};
#endif
