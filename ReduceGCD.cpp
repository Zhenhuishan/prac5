#include <iostream>
#include <vector>
#include "ReduceGCD.h"
using namespace std;

int ReduceGCD::binaryOperator(int x, int y){
    if(x%y==0){
        // cout << y << endl;
        return y;
    }else{
        return binaryOperator(y,x%y);
    }
}

ReduceGCD::ReduceGCD(/* args */)
{
}