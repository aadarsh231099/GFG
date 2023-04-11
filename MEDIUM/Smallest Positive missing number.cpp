//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/0
//Smallest Positive missing number



class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
         sort(arr,arr+n);
        int ans=1;
        for(int i=0;i<n;i++)
    {
        if(arr[i]==ans)
         ans++;
    }
    return ans;
    } 
};