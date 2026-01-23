// pass by reference means ki jab hum function ko value denge to uska ek copy nhi banega balki orginal value pr hi operation hoga

// refrerences can never be null  like int &ref;  // invalid
// reference must be initialized when it is created  like int &ref=age;  // valid


#include <iostream>
using namespace std;

void increment(int &x){
    x++;
    cout<<"Inside Function:"<<x<<endl;
}
int main() {
    int age=5;
    increment(age);
    cout<<"In main function:"<<age;
    return 0;
}