#include <iostream>
#include <vector>
#include "MapGeneric.h"
using namespace std;

int MapGeneric::f(int x){
    return x;
}

MapGeneric::MapGeneric(/* args */)
{
    vec={};
    count=0;
}

vector<int> MapGeneric::map(vector<int> v){
    if(count==v.size()){
        
        return vec;
    }
    else{  
        vec.push_back(f(v[count]));
        count++;
        return map(v);
    }
}
