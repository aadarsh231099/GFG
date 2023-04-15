//https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/0
//Smallest Positive Integer that can not be represented as Sum

//User function Template for C++

class Solution
{   
public:
    long long smallestpositive(vector<long long> arr, int n)
    { 
        // code here 
        sort(arr.begin(),arr.end());
        long long res=1;
        for(int i=0;i<n && arr[i]<=res;i++){
            res+=arr[i];
        }
        return res;
    } 
};