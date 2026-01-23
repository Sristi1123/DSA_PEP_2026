// Pointer: It is a special variable that stores the memory address of another variable.
// The type of pointer should be same as the type of variable whose address it is storing. (mtlb int pointer can store address of int variable only)
//  pointer can't store value directly it can store address of variable only
// Dereferencing of pointer: iska kaam hota hai pointer ke through hum us variable ki value ko access kar sakte hai jiska address pointer store kar raha hai 

#include <iostream>
using namespace std;


int main() {
    int a=5;
    int &ref=a;
    int *ptr=&a;
    
    cout<<ref<<endl;
    cout<<&ref<<endl;     //address of a
    cout<<ptr<<endl;
    
    // Dereferencing of pointer
    cout<<*ptr;
    return 0;

    // int x=10;
    // int*ptr=&x;
    // *ptr=20;
    
    // cout<<x;
    
    // int x=10;
    // int &r=x;
    // r++;
    // cout<<x;

    // Double pointer in cpp is a pointer that points to another pointer.
    // It is used to store the address of a pointer variable. i.e.**ptr2=&ptr;
}
