//https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
//Triplet Sum in Array

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        int i,j,k;
        for(i=0;i<=n-3;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
            int sum=A[i];
            sum+=A[j];
            sum+=A[k];
                if(sum<X) j++;
                else if(sum>X) k--;
                else return 1;
            }
        }
        return 0;
    }

};