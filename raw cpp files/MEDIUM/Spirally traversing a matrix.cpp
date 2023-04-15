//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
//Spirally traversing a matrix

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