// Gfg problem: https://www.geeksforgeeks.org/problems/sum-of-array2326/1
// Leetcode problem: https://leetcode.com/problems/running-sum-of-1d-array/description/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        int n = arr.size() - 1;
        int sum = 0;
        for(int i = 0; i <= n; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;              // size of array

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];     // array elements
    }

    cout << obj.arraySum(arr);

    return 0;
}
