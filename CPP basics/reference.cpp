#include <iostream>
using namespace std;
int main() {
    
    int age=5;
    int &ref=age;       //refernce is created for age
    ref=20;
    cout<<age;
    return 0;
}