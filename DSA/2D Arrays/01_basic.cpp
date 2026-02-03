// never use binary search in 2-D matrix

#include <iostream>
using namespace std;
int main(){
    // int arr[3][4]={{2,3,4,5},{6,4,2,1},{7,0,4,8}};
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3};
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int m;
    cout<<"Enter m: ";
    cin>>m;
    int arr[n][m];

    // taking input row-wise
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // taking input col-wise

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}