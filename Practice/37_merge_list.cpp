// /*  
//    Definition for singly-linked list node:
   
//    struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

// */

// ListNode* mergeStreams(ListNode* l1, ListNode* l2) {
//    // add your code here
//    ListNode* sortedList=new ListNode(-1);
//    ListNode* temp=sortedList;
//    if(!l1) return l2;
//    if(!l2) return l1;
//    while(l1!=NULL && l2!=NULL){
//       if(l1->val<=l2->val){
//          temp->next=l1;
//          l1=l1->next;
//       }else{
//          temp->next=l2;
//          l2=l2->next;
//       }
//       temp=temp->next;
//    }
//    if(l1!=NULL){
//       temp->next=l1;
//    }
//    if(l2!=NULL){
//       temp->next=l2;
//    }
//    return sortedList->next;
// }