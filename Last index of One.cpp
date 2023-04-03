//https://practice.geeksforgeeks.org/problems/last-index-of-15847/0
//Last index of One

class Solution{
    public:
    int lastIndex(string s) 
    {
        int li=0,f=0;
        for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
        li=i;f=1;
        continue;
        }}
        if(f==1)return li;
        else
        return -1;
    }

};