#include <iostream>
#include <vector>
#include "ReduceMinimum.h"
using namespace std;

int ReduceMinimum::binaryOperator(int x, int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}

ReduceMinimum::ReduceMinimum(/* args */)
{
}