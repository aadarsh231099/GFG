//https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/0
//Check if array is sorted

// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int temp[n];
        for(int i=0;i<n;i++)
        temp[i]=arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=arr[i])
            return 0;
        }return 1;
    }
};