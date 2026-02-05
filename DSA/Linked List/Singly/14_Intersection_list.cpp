// https://leetcode.com/problems/intersection-of-two-linked-lists/

// --> Optimized way

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
//         ListNode *pA=headA;
//         ListNode *pB=headB;
//         while(pA!=pB){
//             if(pA==NULL){
//                 pA=headB;
//             }else{
//                 pA=pA->next;
//             }
//             if(pB==NULL){
//                 pB=headA;
//             }else{
//                 pB=pB->next;
//             }
//         }
//         return pA;
//     }


//  --> Approach 2

// class Solution {
// public:
//     int findlength(ListNode* &head){
//         ListNode* temp=head;
//         int count=0;
//         while(temp->next!=NULL){
//             count++;
//             temp=temp->next;
//         }
//         return count;
//     }
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int l1=findlength(headA);
//         int l2=findlength(headB);
//         int l3=abs(l1-l2);
//         ListNode* tempA=headA;
//         ListNode* tempB=headB;
//         if(l2>l1){
//             while(l3--){
//                 tempB=tempB->next;
//             }
//         }else{
//             while(l3--){
//                 tempA=tempA->next;
//             }
//         }
//         while(tempA!=tempB){
//             tempA=tempA->next;
//             tempB=tempB->next;
//         }
//         return tempB;
//     }
// };