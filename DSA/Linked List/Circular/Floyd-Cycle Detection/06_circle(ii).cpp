// https://leetcode.com/problems/linked-list-cycle-ii/description/
// https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 slow=head;
//                 while(slow!=fast){
//                     slow=slow->next;
//                     fast=fast->next;
//                 }
//                 return slow;
//             }
//         }
//         return NULL;
//     }
// };