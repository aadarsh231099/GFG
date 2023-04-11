//https://practice.geeksforgeeks.org/problems/insertion-sort/0
//Insertion Sort

class Solution
{
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++)
        {
            int val=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>val)
            {
                arr[j+1]=arr[j];
                j=j-1;
            }arr[j+1]=val;
        }
        
    }
};