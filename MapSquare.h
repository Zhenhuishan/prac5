#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <iostream>
#include <vector>
#include "MapGeneric.h"
using namespace std;

class MapSquare: public MapGeneric
{
private:
    int f(int);
public:
    MapSquare();
};
#endif
