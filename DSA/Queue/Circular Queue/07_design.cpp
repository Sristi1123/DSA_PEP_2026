// https://leetcode.com/problems/design-circular-queue/

// class MyCircularQueue {
// public:
//     vector<int> data;
//     int front;
//     int rear;
//     int size;
//     int count;
//     MyCircularQueue(int k) {
//         front=0;
//         rear=-1;
//         count=0;
//         size=k;
//         data.clear();  
//         //destroy all existing elements, setting the container size to 0;
//         data.resize(k); 
//         // change the container size to k
//     }
    
//     bool enQueue(int value) {
//         if(isFull()) return false;
//         rear=(rear+1)%size;
//         data[rear]=value;
//         count++;
//         return true;
//     }
    
//     bool deQueue() {
//         if(isEmpty()) return false;
//         front=(front+1)%size;
//         count--;
//         return true;
//     }
    
//     int Front() {
//         if(isEmpty()) return -1;
//         return data[front];
//     }
    
//     int Rear() {
//         if(isEmpty()) return -1;
//         return data[rear];
//     }
    
//     bool isEmpty() {
//         if(count==0){
//             return true;
//         }
//         return false;
//     }
    
//     bool isFull() {
//         return (count==size);
//     }
// };
