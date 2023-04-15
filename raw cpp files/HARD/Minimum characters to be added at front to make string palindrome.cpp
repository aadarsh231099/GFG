//https://practice.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/0
//Minimum characters to be added at front to make string palindrome

class Solution {
public:
    int minChar(string str){
        //Write your code here
        string rev="";
        int n=str.length();
        for(int i=n-1;i>=0;i--)
            rev+=str[i];
        vector<int> str2(2*n , 0);
        int len=0;
        int i=1;
        while(i < n){
            if(str[i]==str[len]){
                ++len;
                str2[i]=len;
                i++;
            }
            else{
                if(len!=0) len=str2[len-1];
                else i++;
            }
        }
        i=0,len=0;
        while(i<n){
            if(rev[i]==str[len]){
                str2[i+n]=++len;
                i++;
            }
            else{
                if(len!=0) len=str2[len-1];
                else i++;
            }
        }
        return n-str2[2*n-1];
    }
};