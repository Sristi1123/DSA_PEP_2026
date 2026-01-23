// pass by value measns ki jab hum function ko value denge to uska ek copy banega aur uske upar operation hoga orginal value pr koi effect nhi padega


#include <iostream>
using namespace std;

void increment(int x){
    x++;
    cout<<"Inside Function:"<<x<<endl;
}

int main() {
    int age=5;
    increment(age);
    cout<<"In main function:"<<age;
    return 0;
}