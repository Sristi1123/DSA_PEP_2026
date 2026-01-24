// example: when a stone and lake is there then a heavy stone will reach the bottom first (alternate swaps)

#include <iostream>
using namespace std;
void bubblesort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){

    return 0;
}