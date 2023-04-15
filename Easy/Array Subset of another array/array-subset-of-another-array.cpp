//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends



string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a1[i]]++;
    }
    bool c=1;
    for(int i=0;i<m;i++)
    {
        int y=a2[i];
        if(mp.find(y)!=mp.end())
        {
            mp[y]--;
            if(mp[y]==0)
            {
                mp.erase(y);
            }
        }
        else
        {
            c=0;
            break;
        }
    }
    if(c==0)
    {
        return "No";
    }
    return "Yes";
    
}