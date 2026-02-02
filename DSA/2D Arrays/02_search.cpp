#include <iostream>
using namespace std;
bool search(int arr[][4],int key){        // row major concept  
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[][4]={
        {1,7,14,6},
        {11,15,5,10},
        {2,4,16,3},
        {9,13,8,12}
    };
    int key=17;
    cout<<search(arr,key);
    return 0;
}