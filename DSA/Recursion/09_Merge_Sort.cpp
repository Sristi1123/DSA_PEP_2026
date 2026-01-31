#include <iostream>
using namespace std;
void merge(int *arr, int start, int end ){

    // --> merge
    int mid=(start+end)/2;
    // find the length of left splitted array 
    int l1=mid-start+1;         // adding 1 becz while calculating indx we subtracted 1
    int l2=end-mid;

    // creating 2 new temporary arrays
    int *arr1=new int[l1];
    int *arr2=new int[l2];

    // copy value from start to mid in arr1
    int k=start;
    for(int i=0;i<l1;i++){
        arr1[i]=arr[k];
        k++;
    }
    // copy values till end in arr2
    k=mid+1;
    for(int i=0;i<l2;i++){
        arr2[i]=arr[k];
        k++;
    }
    // after the values are copied, now we sort and merge the arrays
    int i=0;
    int j=0;
    k=start;
    while(i<l1&&j<l2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }else{
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
    // need to check for remaining elements
    while(i<l1){
        arr[k]=arr1[i];
        k++;
        i++;
    }
    while(j<l2){
        arr[k]=arr2[j];
        k++;
        j++;
    }
    
    delete []arr1;
    delete []arr2;
}
void mergeSort(int arr[],int start,int end){

    // --> Divide
    if(start>=end) return;
    int mid=(start+end)/2;
    mergeSort(arr,start,mid);    //left

    mergeSort(arr,mid+1,end);    //right
    merge(arr,start,end);
}

int main(){
    int arr[]={4,8,1,0,3,2,7,6,4};
    int start=0;
    int n=9;
    mergeSort(arr,start,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }
}