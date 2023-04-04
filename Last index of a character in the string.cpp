//https://practice.geeksforgeeks.org/problems/last-index-of-a-character-in-the-string4516/0
//Last index of a character in the string

class Solution{
    public:
    
    int LastIndex(string s, char p){
        //complete the function here
        int pos=0,c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==p){pos=i;c++;}
        }if(c>0)return pos;
        else return -1;
    }
};