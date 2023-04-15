//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans=new int[2];
        int r=0,s=0,d=0,flag=0;
        for(int i=0;i<n;i++){
            arr[abs(arr[i])-1]*=-1;
            if(arr[abs(arr[i])-1]>0){
            r=abs(arr[i]);
            break;
            }
        }
        for(int i=1;i<=n;i++){
            d=d^i;
        }
        for(int i=0;i<n;i++){
            if(flag==1&&abs(arr[i])==r)
            continue;
            s=s^abs(arr[i]);
            if(abs(arr[i])==r)
            flag=1;
        }
        ans[0]=r;
        ans[1]=s^d;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends