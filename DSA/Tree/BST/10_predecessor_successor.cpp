// https://www.geeksforgeeks.org/problems/predecessor-and-successor/1

// class Solution {
//   public:
//     // predecessor -> the node with the largest value < key
//     //  successor -> the node with the smallest value > key
    
//     // to find predecessor->
//         // if curr node value<key
//         // this node can be a possible predecessor 
//         // but if left subtree exist then go for it 
        
    
//     // Approach 1-> inorder
    
//     // void inorder(Node* root, vector<Node*> &ans){
//     //     if(root==NULL) return;
    
//     //     inorder(root->left, ans);
//     //     ans.push_back(root);
//     //     inorder(root->right, ans);
//     // }

//     // vector<Node*> findPreSuc(Node* root, int key) {
//     //     vector<Node*> ans;
//     //     inorder(root, ans);
    
//     //     Node* start = NULL;
//     //     Node* end = NULL;
    
//     //     for(int i = 0; i < ans.size(); i++){
//     //         if(ans[i]->data < key)
//     //             start = ans[i];
        
//     //         if(ans[i]->data > key){
//     //             end = ans[i];
//     //             break;
//     //         }
//     //     }
//     // return {start, end};
//     // }
    
//     // Approach ->2 left subtree (find predecessor) && right subtree (find successor)
    
//     pair<Node*, Node*> findPredSucess(Node* root, int key){
//         Node* pred=NULL;
//         Node* succ=NULL;
//         Node* node=root;
//         while(node!=NULL){
//             if(key>node->data){
//                 pred=node;
//                 node=node->right;
//             }
//             else if(key<node->data){
//                 succ=node;
//                 node=node->left;
//             }else{
//                 break;
//             }
//         }
//         //  if we found the node with the given key
//         if(node!=NULL){
//             if(node->left!=NULL){
//                 //  find pred (max of LST)
//                 Node* temp=node->left;
//                 while(temp->right!=NULL){
//                     temp=temp->right;
//                 }
//                 pred=temp;
//             }
            
//             if(node->right!=NULL){
//                 //  find succ (min of RST)
//                 Node* temp=node->right;
//                 while(temp->left!=NULL){
//                     temp=temp->left;
//                 }
//                 succ=temp;
//             }
//         }
//         return {pred,succ};
//     }
//     vector<Node*> findPreSuc(Node* root, int key){
//         auto it =findPredSucess(root,key);
//         return {it.first,it.second};
//     }
// };