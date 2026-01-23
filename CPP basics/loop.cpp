#include <iostream>
using namespace std;
int main() {
    // int i=0;   //concept of local and global scope
    // for(int i=0;i<10;i++){
        
    // }        //wt will happen as i is initialized two times
    
    
    
    int i=0;
    for(int i=0;i<10;i++){
        cout<<i<<endl;
    }        
    cout<<i;
    
    
    // int i=0;        //global variable
    // int i=5;   //it shows error 
    // for(int i=0;i<10;i++){
    //     cout<<i<<endl;  //local variable
    // }        
    // cout<<i;
    
     // int i=0;
    // while(i<10){
    //     cout<<i<<endl;     //infinite times
    // }
    
    // int i=0;
    // while(i<10){
    //     cout<<i<<endl;     
    //     i++;
    // }
    
    //do-while loop
    // do{
    //     int i=5;
    //     cout<<i<<" ";
    //     i++;
    // }
    // while(i<10)
    
    //example
    int pin=132;
    int enteredcode;
    while(enteredcode!=pin){
        cout<<"enter pin"<<endl;
        cin>>enteredcode;
    }
    cout<<"Access granted";
    return 0;
}