// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* fast=head;
//         ListNode* slow=head;
        
//         //move the fast ahead by n steps
//         for(int i=0;i<n;i++){
//             fast=fast->next;
//         }

//         //if fast s null->remove head
//         if(fast==NULL) return head->next;

//         while(fast->next!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }

//         //slow->next to be removed
//         ListNode* todel=slow->next;
//         slow->next=slow->next->next;
//         delete todel;
//         return head;
//     }
// };