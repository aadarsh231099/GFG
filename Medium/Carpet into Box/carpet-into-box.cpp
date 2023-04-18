//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        long long int mx=max(A,B),mn=min(A,B);
        int cnt=0;
        while(!(mx<=max(C,D))){
            mx=mx/2;
            if(mx<mn){
                swap(mx,mn);
            }
            cnt++;
        }
        while(!(mn<=min(C,D))){
            mn=mn/2;
            cnt++;
        }
        return cnt;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
