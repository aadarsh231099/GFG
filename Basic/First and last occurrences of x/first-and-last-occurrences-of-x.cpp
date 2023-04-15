//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

vector<int> find(int arr[], int n , int x )
{
    // code here
    int pos=0,pos1=0;
    vector<int> v;
    sort(arr,arr+n);
    int i=0,j=0,c=0;
    for(i=0;i<n;i++)
    {
    if(arr[i]==x)
    {pos=i;c++;break;}}
    if(c>0)
    v.push_back(i);
    else
    v.push_back(-1);
    reverse(arr,arr+n);
    for(j=0;j<n;j++){
    if(arr[j]==x)
    {pos1=j;break;}}
    v.push_back(n-j-1);
    return v;
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends