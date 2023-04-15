//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    bool solve(int N) {
        if(N==1 || N==7)
            return true;
        if(N<=9) return false;
        int sum=0;
        while(N!=0) {
            int digit=N % 10;
            sum+=pow(digit, 2);
            N/=10;
        }
        return solve(sum);
    }
    int nextHappy(int N){
        // code here
        ++N;
        while(true) {
            if(solve(N)) return N;
            else ++N;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends