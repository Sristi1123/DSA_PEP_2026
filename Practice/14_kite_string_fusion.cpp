
// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int k) {
//     // add your code here
//     ListNode* dummy=new ListNode(0);
//     ListNode* temp=dummy;
//     int carry=0;
//     while(l1!=NULL || l2!=NULL || carry!=0){
//         int sum=carry;
//         if(l1!=NULL){
//             sum+=l1->val;
//             l1=l1->next;
//         }
//         if(l2!=NULL){
//             sum+=l2->val;
//             l2=l2->next;
//         }
//         carry=sum/10;
//         int digit=sum%10;
//         digit=(digit*k)%10;
//         temp->next=new ListNode(digit);
//         temp=temp->next;
//     }
//     return dummy->next;
// }