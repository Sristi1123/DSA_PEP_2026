// https://leetcode.com/problems/lru-cache/

// class LRUCache {
// public:

//     class Node{
//         public:
//         int key;
//         int value;
//         Node* prev;
//         Node* next;
//         Node(int key, int value){
//             this->key=key;
//             this->value=value;
//             prev=NULL;next=NULL;
//         }
//     };
//     unordered_map<int,Node*> cache;
//     int cap;
//     Node* head;
//     Node* tail;

//     void addToFront(Node* node){
//         node->next=head->next;
//         node->prev=head;

//         head->next->prev=node;
//         head->next=node;
//     }

//     void removeNode(Node* node){
//         Node* left=node->prev;
//         Node* right=node->next;
//         left->next=right;
//         right->prev=left;
//     }
//     void moveToFront(Node* node){
//         removeNode(node);
//         addToFront(node);
//     }
//     LRUCache(int capacity) {
//         cap=capacity;
//         head=new Node(-1,-1); //dummy1
//         tail=new Node(-1,-1); //dummy2
//         head->next=tail;
//         tail->prev=head;
//     }
    
//     int get(int key) {
//         //find the key in map
//             //if key not found return -1
//             //  else create node with that kay and val
//         // i will move that node to front
//         // return node->val
//         if(cache.find(key)==cache.end()) return -1;
//         Node* node = cache[key];
//         moveToFront(node);
//         return node->value;

//     }
    
//     void put(int key, int value) {
//         if(cache.find(key)!=cache.end()){
//             Node* node=cache[key];
//             node->value=value;
//             moveToFront(node);
//             return;
//         }
//         if(cache.size()==cap){
//             Node* toDel=tail->prev;
//             cache.erase(toDel->key);
//             removeNode(toDel);
//             delete toDel;
//         }
//         Node* newNode=new Node(key,value);
//         cache[key]=newNode;
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */