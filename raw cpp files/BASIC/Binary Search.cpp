//https://practice.geeksforgeeks.org/problems/binary-search-1587115620/0
//Binary Search

// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)return i;
        }return -1;
    }
};