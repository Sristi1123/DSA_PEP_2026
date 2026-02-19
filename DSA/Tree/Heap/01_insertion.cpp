/*
    Heaps-> a heap is a complete binary tree that follows the heap order property

    -Complete Binary Tree (CBT)-> all levels are completely filled except the last level, the last level is filled from left to right

    -Heap Order Property-> 1. Max Heap-> every parent heap is greater tahn or equal to its      children && the largest element is always at the root node
    2. Min Heap-> every parent heap is less than or equal to its children && the smallest element is always at the root node

    ** Heap is not a BST;
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class MaxHeap{
    public:
    vector<int> heap;
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
    void insert(int val){
        heap.push_back(val);
        bubbleup(heap.size()-1);
    }
}
int main(){

    return 0;
}