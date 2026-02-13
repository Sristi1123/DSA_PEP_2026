// C++ program to find median
// of a linked list
#include <bits/stdc++.h>
using namespace std;

// Link list node
struct Node {
    int data;
    struct Node* next;
};

void printMidean(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    Node* prev= head;

    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL){
        cout<<slow->data;
    }else{
        cout<<(slow->data+prev->data)/2.0;
    }
}

/* Given a reference (pointer to 
    pointer) to the head of a list 
    and an int, push a new node on 
    the front of the list. */
void push(struct Node** head_ref, int new_data)
{
    // allocate node
    Node* new_node = new Node;

    // put in the data
    new_node->data = new_data;

    // link the old list
    // off the new node
    new_node->next = (*head_ref);

    // move the head to point
    // to the new node
    (*head_ref) = new_node;
}

// Driver Code
int main()
{
    // Start with the
    // empty list
    struct Node* head = NULL;

    // Use push() to construct
    // below list
    // 1->2->3->4->5->6
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    // Check the count
    // function
    printMidean(head);

    return 0;
}