//  if there are n number of stairs, you can climb either 1 stair or 2 stairs at a time.
//  Find the number of distinct ways to reach the nth stair.

// #include <iostream>
// using namespace std;
// int countWays(int n) {
//     if (n == 0) return 1; 
//     if (n == 1) return 1; 

//     return countWays(n - 1) + countWays(n - 2);
// }
// int main(){
//     cout<<countWays(5);
//     return 0;
// }