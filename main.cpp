#include <iostream>
#include <vector>
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
using namespace std;

// int a(int x, int y){
//     if(x%y==0){
//         return y;
//     }else{
//         return a(y,x%y);
//     }
// }

int main()
{
    MapGeneric *mt=new MapTriple();
    MapGeneric *ms=new MapSquare();
    MapGeneric *ma=new MapAbsoluteValue();
    FilterGeneric *fo=new FilterOdd();
    FilterGeneric *fnp=new FilterNonPositive();
    FilterGeneric *ftdp=new FilterForTwoDigitPositive();
    ReduceGeneric *rm=new ReduceMinimum();
    ReduceGeneric *rgcd=new ReduceGCD();
    int ary[20]={6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    // int ary[20]={-5, -24, -123, -81, 200, 157, 84, 67, -83, -60, -72, 192, -25, -20, -50, -181,-70, -15, -108, -123};
    // int ary[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    // int ary[3]={15,45,10};
    vector<int> v(ary,ary+sizeof(ary));
    
    v=mt->map(v);
    v=ma->map(v);
    v=fo->filter(v);
    v=ftdp->filter(v);

    if (v.size()==0)
    {
        cout << "no number in ary" << endl;
        return 0;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    

    cout << rm->reduce(v) << " "<< rgcd->reduce(v) <<endl;
    return 0;
}

// g++ -o main.out -std=c++11 -O2 MapGeneric.cpp MapTriple.cpp MapSquare.cpp MapAbsoluteValue.cpp FilterGeneric.cpp FilterOdd.cpp FilterNonPositive.cpp FilterForTwoDigitPositive.cpp ReduceGeneric.cpp ReduceMinimum.cpp ReduceGCD.cpp main.cpp