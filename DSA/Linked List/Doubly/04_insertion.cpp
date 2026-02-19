// https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1

// class Solution {
//   public:
//     Node *insertAtPos(Node *head, int p, int x) {
        
//         Node* node = new Node(x);
        
//         // empty list
//         if(head == NULL){
//             return node;
//         }
        
//         Node* temp = head;
//         int count = 0;
        
//         while(temp->next != NULL){
//             if(count == p){
//                 node->next = temp->next;
//                 temp->next->prev = node;
//                 temp->next = node;
//                 node->prev = temp;
//                 return head;
//             }
//             temp = temp->next;
//             count++;
//         }
        
//         // insert at end (when p is last index)
//         if(count == p){
//             temp->next = node;
//             node->prev = temp;
//             node->next = NULL;
//         }
        
//         return head;
//     }
// };
