//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int minChar(string str){
        //Write your code here
        string rev="";
        int n=str.length();
        for(int i=n-1;i>=0;i--)
            rev+=str[i];
        vector<int> str2(2*n , 0);
        int len=0;
        int i=1;
        while(i < n){
            if(str[i]==str[len]){
                ++len;
                str2[i]=len;
                i++;
            }
            else{
                if(len!=0) len=str2[len-1];
                else i++;
            }
        }
        i=0,len=0;
        while(i<n){
            if(rev[i]==str[len]){
                str2[i+n]=++len;
                i++;
            }
            else{
                if(len!=0) len=str2[len-1];
                else i++;
            }
        }
        return n-str2[2*n-1];
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends