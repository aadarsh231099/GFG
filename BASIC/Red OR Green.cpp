//https://practice.geeksforgeeks.org/problems/red-or-green5711/0
//Red OR Green

//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int r=0,g=0;
           for(int i=0;i<N;i++)
           {
               if(S[i]=='R')r++;
               else
               g++;
           }if(r>g)return N-r;
           else if(g>r)return N-g;
           else
           return N-r;
    }
};