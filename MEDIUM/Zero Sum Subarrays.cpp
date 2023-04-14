//https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
//Zero Sum Subarrays

//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        unordered_map<long long int,long long int>m;
        long long int sum=0,c=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0)
            c++;
            if(m.find(sum)!=m.end()){
            c+=m[sum];
            m[sum]++;
            }
            else
            m[sum]=1;
        }
        return c;
    }
};