//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void func(int n,vector<int>&res){
        vector<bool> temp(n,true);
        for(int i=2;i<=sqrt(n);i++){
            if(temp[i]){
                for(int j=i*i;j<n;j+=i){
                    temp[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(temp[i]) res.push_back(i);
        }
    }
    vector<int> primeDivision(int N){
        // code here
        vector<int> res;
        func(N,res);
        for(int a:res){
            int index= lower_bound(res.begin(),res.end(),N-a)-res.begin();
            if(res[index]==N-a) 
            return {a,N-a};
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends