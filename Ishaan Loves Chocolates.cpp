//https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/0
//Ishaan Loves Chocolates

class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};