#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];     //if n value very long then the memory will crash and it is not a good practice instead of this use heap memory 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// int arr[4]={3,6,1};
// cout<<arr[4];    //0 

