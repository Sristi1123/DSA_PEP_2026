// example: when a stone and lake is there then a heavy stone will reach the bottom first (alternate swaps)

#include <iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int> &arr,int n){
    // int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    vector<int> arr={3,1,4,7,2};
    int n=arr.size();
    bubblesort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
