// https://leetcode.com/problems/reverse-nodes-in-k-group/

// class Solution {
// public:

//     ListNode* reverseKGroup(ListNode* head, int k) {
//         int count=0;
//         ListNode* temp=head;
//         while(temp!=NULL&& count<k){
//             temp=temp->next;
//             count++;
//         }
//         if(count==k){
//             ListNode* curr=head;
//             ListNode* prev=NULL;
//             ListNode* next=NULL;
//             int count2=0;
//             while(count2<k){
//                 next=curr->next;
//                 curr->next=prev;
//                 prev=curr;
//                 curr=next;
//                 count2++;
//             }
//             head->next=reverseKGroup(temp, k);
//             return prev;
//         }
//         return head;
//     }
// };