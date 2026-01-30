#include <iostream>
using namespace std;
int summation(int arr[],int n){
    if(n==0) return 0;
    int sum=arr[0];
    return sum+summation(arr+1,n-1);
}
int main(){
    int arr[]={2,6,3,7,1,0};
    int size=6;
    cout<<summation(arr,size);
    return 0;
}