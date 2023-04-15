//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function strlate for C++

class Solution
{
    public:
    int maxFrequency(string S)
    {
    	// code here
    	int res=1;
        int n=S.size();
        string str;;
    	for(int i=0;i<n;i++){
    	    string s1=S.substr(0,i+1);
    	    string s2=S.substr(n-i-1,i+1);
    	    if(s1==s2){
    	        str=s1;
    	        break;
    	    }
    	}
    	for(int i=str.size();i<n;i++){
    	    res+=(str==S.substr(i,str.size()));
    	}
    	return res;
    }
};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
   		Solution obj;
   		cout << obj.maxFrequency(str) << "\n";
   	}
    return 0;
}
// } Driver Code Ends