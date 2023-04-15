//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
        vector<int> prev(N, 0);
        vector<int> curr(N, 0);
        for(int i=1;i<=K;i++){
            for(int j=1;j<N;j++){
                curr[j]=curr[j-1];
                for(int m=0;m<j;m++){
                    curr[j]=max(curr[j],prev[m]+A[j]-A[m]);
                }
            }
            for(int i=0;i<N;i++){
                prev[i]=curr[i];
            }
        }
        return curr[N-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends