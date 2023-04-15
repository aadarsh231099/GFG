//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int n, long long int a[])
    {
        // code here
        const int mod=1e9+7;
        // Your logic here
                vector<int> v(32,0);
        for(int j=0;j<n;j++){
            int i=0,element=a[j];
            while(element){
                v[i++]+=(element&1);
                element>>=1;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            int val=a[i];
            for(int j=0;j<32;j++){
                if(val&1) cnt=(cnt+n-v[j])%mod;
                else cnt=(cnt+v[j])%mod;
                val>>=1;
            }
        }
        return cnt%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends