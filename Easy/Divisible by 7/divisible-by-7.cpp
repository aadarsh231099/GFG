//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        
        //complete the function here
        int n=num.length();
        if(n==0)return 1;
        if(n%3==1)
        {num="00"+num;
        n+=2;
        }
        else if(n%3==2){
            num="0"+num;
            n++;
        }
        int gsum=0,p=1;
        for(int i=n-1;i>=0;i--)
        {   int sum=0;
            sum+=num[i--]-'0';
            sum+=(num[i--]-'0')*10;
            sum+=(num[i]-'0')*100;
            gsum=gsum+sum*p;
            p*=-1;
        }return (gsum%7==0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}
// } Driver Code Ends