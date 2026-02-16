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
    7.) Subtree -> Any node of a tree, with all of its descendents is a subtree
    8.) Level -> this node refers to its distance from the root node, the root of the tree generally has level 0
    9.) Height -> the maximum level in a tree determines its height, the height of a node in a tree is the longest path from that node to a leaf
    10.) Depth -> the depth of a noe is the number of nodes along the path fron the root to that node
    
    (*) Properties of Binary Tree
        1-> if h= height of a binary tree, then 
            a-> maximum number of leaves=2^h
            b-> maximum number of nodes=2^(h+1)-1

        2-> if a binary tree contains m nodes at level l, it contains at most 2m nodes at level l+1
        3-> since a binary tree can contain  at most 1 node at level(0) root, it can contain at most 2^l nodes at level
        4-> the total number of edges in a full binary tree with n nodes, n-1 edges

    (*) Types of Tree
        1) Full BT-> a tree of height h has all its leaves at level h, means all non leaf nodes of a full binary tree have two children and the leaf node have no children
        2) Complete Binary Tree-> all levels are filled except the last level, the last level should be filled from left to right
        3) Skewed Binary Tree-> tilted to any one side of the tree

    (*) if in question there asked for number of nodes then return 0
    (*) if in question there asked for number of edges then return -1

*/
class Node{
    public:
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
    Node* root=new Node(5);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(7);
    cout<<root->data;
    return 0;
}