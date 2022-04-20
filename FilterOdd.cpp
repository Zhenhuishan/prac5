#include <iostream>
#include <vector>
#include "FilterOdd.h"
using namespace std;

bool FilterOdd::g(int x){
    if(x%2==1){
        return true;
    }else{
        return false;
    }
}

FilterOdd::FilterOdd(/* args */)
{
}

FilterOdd::~FilterOdd()
{
}