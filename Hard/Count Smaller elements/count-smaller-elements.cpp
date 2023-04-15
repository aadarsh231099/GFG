//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int>v;
	    vector<int>res;
	    int len=n-1;
	    for(int i=0;i<n;i++){
	        v.push_back(arr[i]);
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<n-1;i++){
	        int low=0;
	        int high=len,mid;
	        while(low<=high){
	            mid=low+(high-low)/2;
	            if(arr[i]<=v[mid]){
	                high=mid-1;
	            }
	            else if(arr[i]>v[mid]){
	                low=mid+1;
	            }
	            else{
	                break;
	            }
	        }
	        while(mid>=0&&v[mid]==arr[i]){
	            mid--;
	        }
	        mid++;
	        res.push_back(len-(len-mid));
	        v.erase(v.begin()+mid);
	        len--;
	    }
	    res.push_back(0);
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends