// https://leetcode.com/problems/odd-even-linked-list/submissions/1908987113/

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* odd=head;
//         ListNode* even=head->next;
//         ListNode* firsteven=even;
//         while(even!=NULL && even->next!=NULL){
//             odd->next=even->next;
//             odd=odd->next;

//             even->next=odd->next;
//             even=even->next;
//         }
//         odd->next=firsteven;
//         return head;
//     }
// };