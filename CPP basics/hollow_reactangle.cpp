#include <iostream>
using namespace std;

int main(){
    // complete rectangle
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
            cout<<"*";
        }cout<<endl;
    }

    //  hollow-rectangle
    int r;
    cin>>r;
    int c;
    cin>>c;
    for (int i=1;i<=r;i++){
        for (int j=1;j<=c;j++){
            if(i==1||j==1||i==r||j==c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }cout<<endl;
    }
    return 0;
}