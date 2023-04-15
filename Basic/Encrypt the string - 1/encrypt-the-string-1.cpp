//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    public:
    string encryptString(string s){
    // code here
        int cnt=1;
        string tmp;
        for (int j=1;j<s.length()+1;j++)
        {
            if(s[j]!=s[j-1])
            {
                tmp+=s[j-1];
                tmp+=to_string(cnt);
                cnt=1;
            }
            else cnt++;
        }
        reverse(tmp.begin(),tmp.end());
        return tmp;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends