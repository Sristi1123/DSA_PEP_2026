#include <iostream>
using namespace std;
// int main(){
//     int arr[][4]={
//         {1,7,14,6},
//         {11,15,5,10},
//         {2,4,16,3},
//         {9,13,8,12}
//     };
//     int sum=0;
//     int maxsum=0;
//     int idx=0;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             sum+=arr[i][j];
//             if(sum>maxsum){
//                 maxsum=sum;
//                 idx=i;
//             }
//         }
//         cout<<sum<<" ";
//         sum=0;
//     }
//     cout<<endl;
//     cout<<maxsum<<"\n";
//     cout<<idx;
// }


int colmaxsum(int arr[][4],int row, int col){
    int sum=0;
    int maxsum=0;
    int idx=0;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
            if(sum>maxsum){
                maxsum=sum;
                idx=i;
            }
        }
        sum=0;
    }
    return idx;
}
int main(){
    int arr[][4]={
        {1,7,14,6},
        {11,15,5,10},
        {2,4,16,3},
        {9,13,8,12}
    };
    cout<<colmaxsum(arr,4,4);
}