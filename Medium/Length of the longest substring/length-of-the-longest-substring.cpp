//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int a[26]={0},res=0,j=0;
        for(int i=0;i<S.length();i++){
        a[S[i]-'a']++;
        if(a[S[i]-'a']==1){
            res=max(res,i-j+1);
        }
        else{
            while(j<i&&a[S[i]-'a']>1){
                a[S[j]-'a']--;
                j++;
            }
        }
    }
    return res;
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
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends