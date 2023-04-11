//https://practice.geeksforgeeks.org/problems/longest-valid-parentheses5657/0
//Longest valid Parentheses

// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        int res=0;
        stack<int>str;
        str.push(-1);
        for(int i=0;i<S.length();i++){
            if(S[i]=='(') str.push(i);
            else{ 
                str.pop();
                if(!str.empty()) res=max(res,i-str.top());
                else str.push(i);
            }
        }
        return res;
    }
};