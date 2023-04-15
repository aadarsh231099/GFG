//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int li=0,f=0;
        for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
        li=i;f=1;
        continue;
        }}
        if(f==1)return li;
        else
        return -1;
    }

};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends