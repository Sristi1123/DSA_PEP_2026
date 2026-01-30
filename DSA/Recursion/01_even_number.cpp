#include <iostream>
using namespace std;
void even(int number){
    if(number==0) return;
    even(number-1);
    if(number%2==0){
        cout<<number<<" ";
    }
}
int main(){
    even(10);
    return 0;
}