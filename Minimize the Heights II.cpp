//https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/0
//Minimize the Heights II

// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int res=arr[n-1]-arr[0];
        int tmax=arr[n-1];
        int tmin=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k<0)continue;
            tmax=max(arr[i-1]+k,arr[n-1]-k);
            tmin=min(arr[0]+k,arr[i]-k);
            res=min(res,tmax-tmin);
        }return res;
    }
};