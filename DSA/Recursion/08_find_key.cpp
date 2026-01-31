#include <iostream>
using namespace std;
// bool findkey(int arr[],int size,int key){
    
//     // --> linear search

//     // if(size==0) return false;
//     // if(key==arr[0]) return true;
//     // return findkey(arr+1,size-1,key);

//     // --> binary search

//     if(size<=0) return false;
//     int mid=size/2;
//     if(arr[mid]==key) return true;
//     else if(key<arr[mid]){
//         return findkey(arr,mid,key);
//     }else{
//         return findkey(arr+mid+1,size-mid-1,key);
//     }
// }

bool findkey(int arr[],int size,int key,int left, int right){
    // while(left<right){
    //     int mid=(left+right)/2;
    //     if(arr[mid]==key) return true;
    //     else if(key<arr[mid]){
    //         return findkey(arr,size,key,left,mid-1);
    //     }else{
    //         return findkey(arr,size,key,mid+1,right);
    //     }
    // }
    // return false;

   if(left>right) return false;
    int mid=(left+right)/2;
    if(arr[mid]==key) return true;
    else if(key<arr[mid]){
        return findkey(arr,size,key,left,mid-1);
    }else{
        return findkey(arr,size,key,mid+1,right);
    }
}
int main(){
    int arr[]={0,1,2,3,4,5};
    int size=6;
    int key=4;
    cout<<findkey(arr,size,key,0,size-1);
    return 0;
}