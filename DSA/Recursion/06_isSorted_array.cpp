#include <iostream>
using namespace std;
bool isSort(int arr[],int size){
    if(size==0||size==1) return true;
    if(arr[0]>arr[1]) return false;
    return isSort(arr+1,size-1);
}
int main(){
    int arr[]={2,6,3,7,1,0};
    int size=6;
    cout<<isSort(arr,size);
    return 0;
}