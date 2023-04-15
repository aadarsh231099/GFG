//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int r=0,g=0;
           for(int i=0;i<N;i++)
           {
               if(S[i]=='R')r++;
               else
               g++;
           }if(r>g)return N-r;
           else if(g>r)return N-g;
           else
           return N-r;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends