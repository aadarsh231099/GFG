//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minimumAppend(int arr[], int num, int x)
    {
        // Complete the function
        int e=0,l=0,h=0;
        int gs=INT_MIN;
        int sg=INT_MAX;
        for(int i=0;i<num;i++){
            if(arr[i]==x)
                e++;
            else if(arr[i]<x){
                l++;
                gs=max(gs,arr[i]);
            }
            else{
                h++;
                sg=min(sg,arr[i]);
            }
        }
        int add=0;
        if(num%2==0){
            add=abs(h-l)-e+1;
            if(e!=1 && gs+sg==2*x){
                add--;
            }
        }
        else{
            if(e==1 || gs+sg==2*x){
                add=abs(h-l);
            }
            else if(gs+sg>2*x){
                if(l<h)
                    add=h-l+1;
                else
                    add=l-h;
            }
            else{
                if(l<h)
                    add=h-l;
                else
                    add=l-h+1;
            }
        }
        return add;
    }

};

//{ Driver Code Starts.
int main() {
    
	int T;
	cin>>T;
	while(T--){
	    int num, x;
	    cin>>num>>x;
	    int arr[num];
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	     Solution obj;
	    cout << obj.minimumAppend(arr, num, x) << endl;
	    
	}
}
// } Driver Code Ends