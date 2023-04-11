//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/0
//Missing number in array

// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        for(int i=1;i<n;i++)
        {
            if(i!=array[i-1])
            return i;
        }
    }
};