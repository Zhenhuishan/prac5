#include <iostream>
#include <vector>
#include "FilterGeneric.h"
using namespace std;

FilterGeneric::FilterGeneric(/* args */)
{
    vec={};
    count=0;
}

vector<int> FilterGeneric::filter(vector<int> v){
    if(count==v.size()){
        return vec;
    }
    else{  
        // cout << g(v[count]) << endl;
        if(g(v[count])==true){
            vec.push_back(v[count]);
        }else{}
        count++;
        return filter(v);
    }
}

FilterGeneric::~FilterGeneric()
{
}