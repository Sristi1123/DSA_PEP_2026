// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

// class Solution {
//   public:
//     vector<int> topView(Node *root) {
//         // code here
//         vector<int> res;
//         if(root==NULL) return res;
        
//         // we will create a map to store first node at each 
//         // horizontal distance
        
//         // key-> horizontal distance (hd)
//         // value-> node value
        
//         map<int,int> topNode;
        
//         // create a queue to store pair of node and hd
//         queue<pair<Node*,int>> q;
        
//         // start with pushing the root at hd 0
//         q.push(make_pair(root,0));
        
//         while(!q.empty()){
//             // extract the front pair
//             pair<Node*, int> frontVal=q.front();
//             q.pop();
            
//             Node* node=frontVal.first;
//             int hd=frontVal.second;
            
//             if(topNode.find(hd)==topNode.end()){
//                 topNode[hd]=node->data;
//             }
//             if(node->left!=NULL){
//                 q.push(make_pair(node->left,hd-1));
//             }
//             if(node->right!=NULL){
//                 q.push(make_pair(node->right,hd+1));
//             }
//         }
//         for(auto it: topNode){
//             res.push_back(it.second);
//         }
//         return res;
//     }
// };