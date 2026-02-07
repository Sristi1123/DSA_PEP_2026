// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/


// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if (!head) return nullptr;

//         ListNode dummy(0);
//         dummy.next = head;

//         ListNode* prev = &dummy;
//         ListNode* temp = head;
//         ListNode* curr = head->next;

//         while (curr != nullptr) {
//             if (temp->val == curr->val) {
//                 int dup = temp->val;

//                 while (curr != nullptr && curr->val == dup) {
//                     curr = curr->next;
//                 }
//                 prev->next = curr;
//                 temp = curr;
//                 if (curr) curr = curr->next;
//             } 
//             else {
//                 prev = temp;
//                 temp = curr;
//                 curr = curr->next;
//             }
//         }
//         return dummy.next;
//     }
// };