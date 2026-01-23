#include <iostream>
using namespace std;
int main() {
    
    //nested loop
    int i=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<i<<"-"<<j<<endl;    //time complexity (n^2)
        }
    }
    
    return 0;
}