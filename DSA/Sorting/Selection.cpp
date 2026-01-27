//  example: book in library (sort them based on their height)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void selectionsort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }swap(arr[i],arr[min]);
    }
}
int main(){
    vector<int> arr = {3, 0, 2, 7, 1};
    int n = arr.size();

    selectionsort(arr, n);

    // printing sorted array
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}