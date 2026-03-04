// /* structure for a node
// struct Node {
//     int data;
//     Node *left, *right;
//     Node(int val) { data = val; left = right = NULL; }
// }; */

// vector<int> topView(Node* root) {
//     // add your code here
//     vector<int> res;
//     if(root==NULL) return res;
//     map<int,int> topNode;
//     queue<pair<Node*,int>> q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<Node*,int> front=q.front();
//         q.pop();
//         Node* node=front.first;
//         int hd=front.second;
//         if(topNode.find(hd)==topNode.end()){
//             topNode[hd]=node->data;
//         }
//         if(node->left!=NULL){
//             q.push(make_pair(node->left,hd-1));
//         }
//         if(node->right!=NULL){
//             q.push(make_pair(node->right,hd+1));
//         }
//     }
//     for(auto it:topNode){
//         res.push_back(it.second);
//     }
//     return res;
// }