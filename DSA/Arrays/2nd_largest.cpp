// GFG Problem: https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        int second=arr[1];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                second=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>second){
                second=arr[i];
            }
        }
        return second;
    }
};