// https://leetcode.com/problems/sort-list/

// class Solution {
// public:
//     ListNode* midNode(ListNode* head){
//         if(head==NULL|| head->next==NULL) return head;
//         ListNode* slow=head;
//         ListNode* fast=head->next;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
//     ListNode* mergeList(ListNode* left, ListNode* right) {
//     ListNode* dummy = new ListNode(-1);
//     ListNode* tail = dummy;

//     while (left != NULL && right != NULL) {
//         if (left->val <= right->val) {
//             tail->next = left;
//             left = left->next;     
//         } else {
//             tail->next = right;
//             right = right->next;  
//         }
//         tail = tail->next;
//     }

//     if (left != NULL) tail->next = left;
//     if (right != NULL) tail->next = right;

//     return dummy->next;
// }

//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         ListNode* mid=midNode(head);
//         ListNode* left=head;
//         ListNode* right=mid->next;

//         //disconnecting the left half and right half
//         mid->next=NULL;
//         ListNode* sortedleft=sortList(left);
//         ListNode* sortedright=sortList(right);
//         return mergeList(sortedleft,sortedright);
//     }
// };