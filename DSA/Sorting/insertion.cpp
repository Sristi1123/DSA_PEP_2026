// example: playing cards
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
void insertionsort(vector<int> &arr,int n){
    
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    vector<int> arr={8,2,0,1,4};
    int n=arr.size();
    insertionsort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}