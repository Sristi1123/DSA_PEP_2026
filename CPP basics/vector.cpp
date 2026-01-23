// vector: it is alredy in libraries of cpp given by standard template library(STL) ->it is dynamic in nature


#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a={3,5,1,0};          //initialization of a vector
    vector<char> b(3);
    // cout<<a[2];

    // cout<<a.at(2);                          //same as index + if e have to handle error this is best way rather than indices

    // there is diff. b/w index and .at function of vector as .at doesn't give garbage value when it gives out of bound index to print the value.

    // a.push_back(10);                     //add a new element in the end of array
    // for(int i:a){
    //     cout<<i<<" ";
    // }

    // a.pop_back();                            // remove the end element 
    // for(int i:a){
    //     cout<<i<<" ";
    // }

    // a.size();                   size of vector

    a.clear();
}