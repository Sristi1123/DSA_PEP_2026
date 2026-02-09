// https://leetcode.com/problems/copy-list-with-random-pointer/

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         // i have to clone nodes and insert them right after the original nodes
//         Node* curr=head;

//         while(curr!=NULL){
//             Node* dummy=new Node(curr->val);
//             dummy->next=curr->next;
//             curr->next=dummy;

//             curr=dummy->next;
//         }
//         // then we have to set the random pointer of the cloned nodes
//         curr=head;
//         while(curr!=NULL){
//             if(curr->random!=NULL){
//                 curr->next->random=curr->random->next;
//             }
//             curr=curr->next->next;
//         }
//         // to restore the original list and segregate the cloned list
//         Node* dummy=new Node(-1);
//         Node* tail=dummy;

//         curr=head;
//         while(curr!=NULL){
//             Node* copyNode=curr->next;
//             curr->next=copyNode->next;

//             tail->next=copyNode;;
//             tail=tail->next;

//             curr=curr->next;
//         } 
//         return dummy->next;
//     }
// };