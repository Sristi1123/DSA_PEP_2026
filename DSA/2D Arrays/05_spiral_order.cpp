#include <iostream>
using namespace std;
void spiral(int arr[][4],int row,int col){
    int toprow=0;
    int bottomrow=row-1;
    int leftcol=0;
    int rightcol=col-1;
    while(toprow<=bottomrow && leftcol<=rightcol){
        // print top-row
        for(int i=leftcol;i<=rightcol;i++){
            cout<<arr[toprow][i]<<" ";
        }
        toprow++;
        for(int j=toprow;j<=bottomrow;j++){
            cout<<arr[j][rightcol]<<" ";
        }
        rightcol--;
        for(int i=rightcol;i>=leftcol;i--){
            cout<<arr[bottomrow][i]<<" ";
        }
        bottomrow--;
        for(int j=bottomrow;j>=toprow;j--){
            cout<<arr[j][leftcol]<<" ";
        }
        leftcol++;
    }
}
int main(){
    int arr[][4]={
        {1,7,14,6},
        {11,15,5,10},
        {2,4,16,3},
        {9,13,8,12}
    };
    spiral(arr,4,4);
}