// https://leetcode.com/problems/partition-list/

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* str1=new ListNode(-1);
//         ListNode* str2=new ListNode(-1);

//         ListNode* p1=str1;
//         ListNode* p2=str2;

//         ListNode* temp=head;

//         while(temp!=nullptr){
//             if(temp->val>=x){
//                 str2->next=temp;
//                 str2=str2->next;
//             }else{
//                 str1->next=temp;
//                 str1=str1->next;
//             }
//             temp=temp->next;
//         }
//         str2->next=NULL;
//         str1->next=p2->next;
//         return p1->next;
//     }
// };