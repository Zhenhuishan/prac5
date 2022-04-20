#include <iostream>
#include "ReduceGeneric.h"
using namespace std;

ReduceGeneric::ReduceGeneric(/* args */)
{
    // vec={};
    result=0;
    count=0;
}

int ReduceGeneric::reduce(vector<int> v){
    count=v.size();
    if(count==1){
        return result;
    }
    else{  
        v[count-1]=binaryOperator(v[count-1],v[count-2]);
        result=v[count-1];
        v.pop_back();
        return reduce(v);
    }
}

ReduceGeneric::~ReduceGeneric()
{
}