#include <iostream>
using namespace std;

int binarysearch(int arr[],int key){
    int start=0;
    int end=4;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={3,5,7,9,11};
    int key;
    cin>>key;
    int x=binarysearch(arr,key);
    cout<<x;
    return 0;
}