//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        int j=0,c=0;string str;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])==0)
            {s.erase(i,1);i--;}
            else c++;
            } if(c>0)return s;
            else return "-1";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.removeSpecialCharacter(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends