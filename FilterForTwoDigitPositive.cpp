#include <iostream>
#include <vector>
#include "FilterForTwoDigitPositive.h"
using namespace std;

bool FilterForTwoDigitPositive::g(int x){
    if(x>=10 &&x<=99){
        return true;
    }else{
        return false;
    }
}

FilterForTwoDigitPositive::FilterForTwoDigitPositive(/* args */)
{
}