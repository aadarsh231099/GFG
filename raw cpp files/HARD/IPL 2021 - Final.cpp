//https://practice.geeksforgeeks.org/problems/3b47f0ad00f953dd514235ddec54e39fdc297dda/0
//IPL 2021 - Final

// User function template for c++
// User function template for c++
class Solution {
public:
    int findMaxLen(string s) {
        stack<int> st; 
        st.push(-1); 
        int mlen=0; 
        for (int i=0;i<s.length();i++) {
            if (s[i]=='(') {
                st.push(i); 
            } else {
                st.pop(); 
                if (!st.empty()) {
                    mlen=max(mlen,i-st.top());
                } else {
                    st.push(i);
                }
            }
        }

        return mlen;
    }
};