#include <iostream>
using namespace std;
void wavePrint(int arr[][4],int row, int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}
int main(){
    int arr[][4]={
        {1,7,14,6},
        {11,15,5,10},
        {2,4,16,3},
        {9,13,8,12}
    };
    wavePrint(arr,4,4);
}