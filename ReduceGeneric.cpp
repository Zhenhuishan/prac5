#include <iostream>
#include "ReduceGeneric.h"
using namespace std;

ReduceGeneric::ReduceGeneric(/* args */)
{
    // vec={};
    // result=0;
    count=0;
}

int ReduceGeneric::reduce(vector<int> v){
    count=v.size();
    if(count==1){
        return v[0];
    }
    else if(count==0){
        return 0;
    }
    else{   
        v[count-2]=binaryOperator(v[count-1],v[count-2]);
        v.pop_back();
        
        return reduce(v);
    }
}

ReduceGeneric::~ReduceGeneric()
{
}