#include <iostream>
using namespace std;

// void hello(){
//     cout<<"Hello";
// }
// void hello2(){
//     hello();
// }
// int main() {
//     //functions->reusability of code
//     // function two types->void (not return anything),non-void
//     //what is the the difference between print and return
//     hello2();
//     return 0;

//in cpp code runs line by line so it will print error
// void hello2(){
//     hello();
// }
// void hello(){
//     cout<<"Hello";
// }
// int main() {
//     //functions->reusability of code
//     // function two types->void (not return anything),non-void
//     //what is the the difference between print and return
//     hello2();
//     return 0;
// }

// int add(){
//     return 10;
// }
// int main() {
//     cout<<add()*10;
// }

// bool add(){
//     return true;
// }
// int main(){
//     cout<<add()*10;  //typecasting is used 
// }


int add(){
    return 10;
}
int main(){
    cout<<add();
}


//return type
//difference between arguments and parameters
int add(int a,int b){
    return a+b;
}
int main(){
    cout<<add(4,8);
}


//example
float sub(float a,float b){
    return a-b;
} 
int main(){
    cout<<sub(6.2,3.7);
}

//pass by value and pass by reference 
