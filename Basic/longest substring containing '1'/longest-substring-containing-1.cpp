//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
// your code here
int m=0,c=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='1')c++;
    else
    {
        m=max(m,c);
        c=0;
    }
}return max(m,c);
}