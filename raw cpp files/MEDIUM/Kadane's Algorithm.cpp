//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0
//Kadane's Algorithm

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max=0,maxtill=INT_MIN;
        for(int i=0;i<n;i++){
        max+=arr[i];
        if(maxtill<max)
        maxtill=max;
        if(max<0)max=0;
        }
        
        return maxtill;
        
    }
};