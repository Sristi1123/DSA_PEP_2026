// ListNode* swapAndReverse(ListNode* head, int k) {
//     // add your code here
//     if(!head) return head;
//     int n=0;
//     ListNode* temp=head;
//     while(temp)
// {
//     n++;
//     temp=temp->next;
// }
// if(k>n) return head;
// int left=k;
// int right=n-k+1;
// if(left>right) swap(left,right);
// ListNode* first=head;
// for(int i=1;i<left;i++){
//     first=first->next;
// }
// ListNode* second=head;
// for(int i=1;i<right;i++){
//     second=second->next;
// }
// swap(first->val,second->val);
// if(right-left<=1){
//     return head;
// }
// ListNode* prev=first;
// ListNode* curr=first->next;
// ListNode* stop=second;
// ListNode* prevNode=stop;
// while(curr!=stop){
//     ListNode* nextNode=curr->next;
//     curr->next=prevNode;
//     prevNode=curr;
//     curr=nextNode;
// }
// prev->next=prevNode;
// return head;
// }