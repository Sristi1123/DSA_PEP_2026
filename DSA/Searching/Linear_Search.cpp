// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={8,4,0,1,7,2,3};
//     int key=1;
//     for(int i=0;i<7;i++){
//         if(key==arr[i]){
//             cout<<i;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// //return the key of index if it is found
// int linearsearch(int arr[],int key){
//     for(int i=0;i<5;i++){
//         if(key==arr[i]){
//             return i;
//         }
//     }
// }
// int main(){
//     int arr[5]={3,1,6,4,2};
//     int key=2;
//     int x=linearsearch(arr,key);
    // cout<<x;
//     return 0;
// }


//find the key in array using linear search, if key is found and value of key>5 then print double of key else return half of key 

#include <iostream>
using namespace std;

int linearsearch(int arr[],int key){
    for(int i=0;i<5;i++){
        if(key==arr[i]){
            if(key>5){
                return key*2;
            }else{
                return key/2;
            }
        }
    }
    return -1;
}
int main(){
    int arr[5]={3,2,10,0,4};
    int key;
    cin>>key;
    int x=linearsearch(arr,key);
    cout<<x;
    return 0;
}