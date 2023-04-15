//https://practice.geeksforgeeks.org/problems/peak-element/0
//Peak element

/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int t[n];
       for(int i=0;i<n;i++)
       t[i]=arr[i];
       sort(t,t+n);
       int ele=t[n-1];
       int p=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==ele)
           p=i;
       }
       return p;
    }
};