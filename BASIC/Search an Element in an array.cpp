//https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/0
//Search an Element in an array

class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        // Your code here
        for(int j=0;j<N;j++)
        {
            if(arr[j]==X)
            return j;
        }
        return -1;
    }

};