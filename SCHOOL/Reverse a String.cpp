//https://practice.geeksforgeeks.org/problems/java-reverse-a-string0416/0
//Reverse a String
class Solution {
  public:
    string revStr(string S) {
        // code here
        reverse(S.begin(),S.end());
        return S;
    }
};
