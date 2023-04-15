//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution
{
public:
    long long trappingWater(int arr[], int n)
    {
        int left=0,right=n-1,leftMax=0,rightMax=0;   
        long long total=0; 
        while (left<right)
        {
            if (arr[left]<arr[right])
            {
                if (arr[left]>leftMax)
                    leftMax=arr[left];
                else
                    total+=leftMax-arr[left];
                left++;
            }
            else
            {
                if (arr[right]>rightMax)
                    rightMax=arr[right];
                else
                    total+=rightMax-arr[right];
                right--;
            }
        }
        return total;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends