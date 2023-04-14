//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
//Subarray with given sum

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        if(s==0) return {-1};
        long long int sum=0,i,j=0;
        for(i=0;i<n;i++){
            sum+=arr[i];
            if(sum==s) return {j+1,i+1};
            else if(sum>s){
                while(j<=i&&sum>s){
                    sum-=arr[j];
                    j++;
                }
                if(sum==s)
                return {j+1,i+1};
            }
        }
        return {-1};
    }
};