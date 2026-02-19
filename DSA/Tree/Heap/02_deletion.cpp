#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;
    void bubbleDown(){
        int i=0;
        int size=heap.size();
        while(i<size){
            int left=2*i+1;
            int right=2*i+2;
            int largest=i;

            if(left<size && heap[left]>heap[largest]){
                largest=left;
            }
            if(right<size && heap[right]>heap[largest]){
                largest=right;
            }
            if(largest!=i){
                swap(heap[i],heap[largest]);
                i=largest;
            }
            else{
                break;
            }
        }
    }
}
int main(){
    
    return 0;
}