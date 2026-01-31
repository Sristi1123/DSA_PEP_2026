#include <iostream>
using namespace std;
int partition(int arr[],int start,int end){
    // find pivot (first element)
    int pivot=arr[start];

    // counting how many elements are lesser than pivot
    int count=0;
    for(int i=start+1;i<=end;i++){ 
        if(arr[i]<=pivot) count++;
    }

    // after counting, we got to know about the right place of pivot, now we will create a pivot index at that position
    int pivotIdx=start+count;
    swap(arr[pivotIdx],arr[start]);

    // now we will handle the right and left part in which all the elements should be less than or greater than resp.
    int i=start;
    int j=end;
    while(i<pivotIdx && j>pivotIdx){
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        swap(arr[i++],arr[j--]);
    }
    return pivotIdx;
}
void quickSort(int arr[], int start, int end){
    if(start>=end) return;
    int p=partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int main(){
    int arr[]={4,5,2,1,7,8,0};
    quickSort(arr,0,6);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}