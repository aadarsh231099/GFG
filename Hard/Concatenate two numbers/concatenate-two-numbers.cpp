//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        // code here
        int n=numbers.size();
        map<string ,int>mp;
        for(int i=0;i<n;i++){
            string s=to_string(numbers[i]);
            mp[s]++;
        }
        string s2=to_string(X);
        int m=s2.size(),idx=1,c=0;
        for(int i=0;i<m;i++){
           string x1=s2.substr(0,i+1);
           string x2=s2.substr(i+1,m-i-1);
           if(mp[x1]&&mp[x2]){
            if(x1!=x2){
                c+=(mp[x1]*mp[x2]);
                
            }
            else{
              c+=((mp[x1]-1)*mp[x1]);    
            }
           }
        }
        return c;
    }
}; 

//{ Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}
// } Driver Code Ends