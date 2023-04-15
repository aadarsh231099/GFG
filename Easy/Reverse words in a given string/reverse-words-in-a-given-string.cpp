//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
       vector<string>str;
        string s,strf;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='.')
            {
                str.push_back(s);
                s="";
            }
            else
            s+=S[i];
        }str.push_back(s);
        for(int i=str.size()-1;i>0;i--)
        strf+=str[i]+".";
        return (strf+str[0]);
    }
    
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends