//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int count(int x,int Y[],int n,int cntY[]) {
        if (x==1)  return 0;
        int* idx=upper_bound(Y,Y+n,x);
        int ans=(Y+n)-idx;
        ans+=cntY[1];
        if (x==2)ans-=(cntY[3]+cntY[4]);
        if (x==3)ans+=cntY[2];
        return ans;
}
    long long countPairs(int X[], int Y[], int m, int n) {
        // code here
        int check[5]={0};
        for (int i=0;i<n;i++)
            if (Y[i]<5) check[Y[i]]++;
        sort(Y,Y+n);
        long long ans=0;
        for (int i=0;i<m;i++) {
            ans+=count(X[i],Y,n,check);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];
        for (int i = 0; i < m; i++) {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        Solution ob;
        auto ans = ob.countPairs(X, Y, m, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends