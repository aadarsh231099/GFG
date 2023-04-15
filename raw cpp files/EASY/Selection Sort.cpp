//https://practice.geeksforgeeks.org/problems/selection-sort/0
//Selection Sort

class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<n;i++)
       {
           int index=i;
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]<arr[index])
               index=j;
           }
           if(index!=i)
           swap(arr[index],arr[i]);
       }
    }
};