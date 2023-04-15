//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
       int i=0,j=0,k=0;
       vector<int> v;
       while(true)
       {
           while(j<c&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               j++;
           }
           j--;
           i++;
           while(i<r&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               i++;
           }
           i--;
           j--;
           while(j>=0&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               j--;
           }
           j++;
           i--;
           while(i>=0&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               i--;
           }
           i++;
           j++;
           if(k==0)
           {
               break;
           }
           k=0;
       }
       return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends