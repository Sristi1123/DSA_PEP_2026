// Time Complexity -> how much time an algo. takes as input size increases
// Big O-> represents the upper bound of running time, it gives the worst-case scenario for an algo. It describe the max time an algo. can take

/*

1. O(1)-Constant time->the time taken doesn't depend on the input size, the algo. always run in the same time. 

    cout<<"Hello";
    for(int i=0;i<10;i++){
    }

2. O(log n)-Logarathmic time->time grows logarathmically as the input size increases, often seen in algos that divide the input in half, 
    like: binary search

    for(int i=0;i<n/2;i++){
    }

3. O(n)-Linear time->the time grows directly proportional to input size

    for(int i=0;i<n;i++){
    }

4. O(n log n)-Linearithmic time-> A mix of linear and logarathmic 
    like: quick sort and merge sort 

5. O(n^2)-Quadratic time-> time grows proportionally to th esquare of input size 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        }
    }

*/


// Space Complexity -> how much space an algo. will take in memory 
/*

1. O(1)->usually if you you only the things that are given in the ques

2. O(n)->if we make a different array to store the existing one such cases

*/