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
    void bubbleup(int idx){
        while(idx>0){
            //  find the parent
            int parent=(idx-1)/2;
            // if curr node> parent{
            if(heap[idx]>heap[parent]){
                swap(heap[idx],heap[parent]);
                idx=parent;
            }else{
                break;
            }
        }
    }
    void deletion(){
        swap(heap[0],heap[heap.size()-1]);
        heap.pop_back();
        bubbleDown();
    }
     void insert(int val){
        heap.push_back(val);
        bubbleup(heap.size()-1);
    }
};
int main(){
    MaxHeap heap;
    heap.insert(2);
    heap.insert(3);
    heap.insert(4);
    heap.insert(5);
    for(int i=0;i<heap.heap.size();i++){
        cout<<heap.heap[i]<<" ";
    }
    return 0;
}