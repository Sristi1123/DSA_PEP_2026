#include <iostream>
using namespace std;
int main() {
    int a=5;
    int b=10;
    //operators
    //Arith.->+-/*%
    // cout<<a+b<<endl;
    
    // cout<<a++<<endl;   //post-increment
    // cout<<a<<endl; //6
    // cout<<++a;   //pre-increment->7
    
    //relational-> > < >= <= ==(comarison operator)
    // cout<<(10>5)<<endl; 
    // cout<<(10==5);
    
    //Logical->And(&&) OR(||) NOT(!)
    // int age=25;
    // bool hasID=true;
    // if(age>=18 && hasID){
    //     cout<<"Eligible";
    // }else{
    //     cout<<"Not";
    // }
    
    int p=20;
    int r=20;
    int t=3;
    int SI=(p*r*t)/100;
    if(SI>50){
        cout<<"Pay the tax";
    }else{
        cout<<"Not Pay the tax";
    }
    return 0;
}