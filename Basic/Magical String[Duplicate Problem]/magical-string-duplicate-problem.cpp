//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string magicalString(string S){
        // code here 
        string b="abcdefghijklmnopqrstuvwxyz";
        int len=S.size();
        string ans="";
        
        for(int i=0;i<len;i++)
        {
            int d=(S[i]-'a');
            ans+=b[25-d];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends