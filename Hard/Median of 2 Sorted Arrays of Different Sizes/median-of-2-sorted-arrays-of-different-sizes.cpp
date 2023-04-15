//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        if (array1.size()>array2.size())
            return MedianOfArrays(array2, array1);
        int x=array1.size();
        int y=array2.size();
        int low=0;
        int high=x;
        while (low<=high) {
            int partitionX=(low+high)/2;
            int partitionY=(x+y+1)/2-partitionX;
            int maxX=(partitionX==0)?INT_MIN:array1[partitionX-1];
            int maxY=(partitionY==0)?INT_MIN:array2[partitionY-1];
            int minX=(partitionX==x)?INT_MAX:array1[partitionX];
            int minY=(partitionY==y)?INT_MAX:array2[partitionY];
            if (maxX<=minY && maxY<=minX) {
                if ((x+y)%2==0) {
                    return (max(maxX,maxY)+min(minX,minY))/2.0;
                } else
                    return max(maxX, maxY);
            } else if (maxX>minY)
                high=partitionX-1;
                else
                low=partitionX+1;
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends