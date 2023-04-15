//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int bin[100],pos=0,c=0;
        while(N){
            bin[pos++]=N%2;
            N=N/2;
        }
        for(int i=0;i<pos;i++)
        {
            if(bin[i]==1)c++;
        }return c;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends