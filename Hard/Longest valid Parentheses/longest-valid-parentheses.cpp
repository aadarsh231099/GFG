//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        int res=0;
        stack<int>str;
        str.push(-1);
        for(int i=0;i<S.length();i++){
            if(S[i]=='(') str.push(i);
            else{ 
                str.pop();
                if(!str.empty()) res=max(res,i-str.top());
                else str.push(i);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends