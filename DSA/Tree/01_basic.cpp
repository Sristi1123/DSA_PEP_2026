#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
/*
    Tree -> it is a non-linear, hierarchial data structure consisting of nodes connected by edges.
    Binary Tree -> a tree which have at most two children

    Terminologies:-
    1.) Leaf Node -> a node with no child
    2.) Internal Node -> a node which is not leaf node
    3.) Sibling Node-> children of same parent
    4.) Cousin Nodes -> nodes with same ancestor
    5.) Path -> egde between parent to child
   --> Length of path => (Total nodes in a path - 1)
    6.) Ancestors and Descendents -> if there is a path from node A to node B, then A is called Ancestor of B and B is called Descendent of A. 
    7.) Sunbtree -> Any node of a tree, with all of its descendents is a subtree
    8.) Level -> this node refers to its distance from the root node, the root of the tree generally has level 0
    9.) Height ->
    10.) Depth ->
*/
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int main(){
    
    return 0;
}