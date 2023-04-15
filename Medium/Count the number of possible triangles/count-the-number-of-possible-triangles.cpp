//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int l,r,i,count=0;
        for(i=n-1;i>1;i--)
        {
            l=0;
            r=i-1;
            while(l<r)
            {
                if(arr[l]+arr[r]>arr[i])
                {
                    count+=(r-l);
                    r--;
                }
                else if(arr[l]+arr[r]<=arr[i]) l++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends