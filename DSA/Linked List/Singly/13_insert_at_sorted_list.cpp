// https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

// /*
// structure of the node of the list is as
// struct Node
// {
//     int data;
//     struct Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     // Should return head of the modified linked list
//     Node* sortedInsert(Node* head, int key) {
//         // Code here
//         Node* temp=head;
//         Node* Key=new Node(key);
//         while(temp->next!=NULL){
//             // --> Front 
//             if(temp->data>key||head==NULL){
//                 Key->next=temp;
//                 temp=Key;
//                 return temp;
//             }
            
//             // -->At any position
//             Node* prev=NULL;
//             Node* curr=head;
//             while(curr!=NULL && curr->data<=key){
//                 prev=curr;
//                 curr=curr->next;
//             }
//             prev->next=Key;
//             Key->next=curr;
//             return head;
//         }
//     }
// };