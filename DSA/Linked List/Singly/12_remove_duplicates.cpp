// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* temp=head;
//         if(head==NULL){
//             return head;
//         }
//         while(temp!=NULL && temp->next!=NULL){
//             if(temp->val==temp->next->val){
//                 ListNode* duplicate=temp->next;
//                 temp->next=duplicate->next;
//                 delete duplicate;
//             }else{
//                 temp=temp->next;
//             }
//         }
//         return head;
//     }
// };