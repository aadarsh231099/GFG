//https://practice.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/0
//Convert String to LowerCase

// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
        transform(S.begin(),S.end(),S.begin(),::tolower);
        return S;
    }
};