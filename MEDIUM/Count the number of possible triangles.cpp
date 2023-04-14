//https://practice.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1
//Count the number of possible triangles

class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int l,r,i,count=0;
        for(i=n-1;i>1;i--)
        {
            l=0;
            r=i-1;
            while(l<r)
            {
                if(arr[l]+arr[r]>arr[i])
                {
                    count+=(r-l);
                    r--;
                }
                else if(arr[l]+arr[r]<=arr[i]) l++;
            }
        }
        return count;
    }
};