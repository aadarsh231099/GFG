//https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/0
//Reverse each word in a given string

class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        vector<string>str;
        string S,strf;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                str.push_back(S);
                S="";
            }
            else
            S+=s[i];
        }str.push_back(S);
        for(int i=str.size()-1;i>0;i--)
        strf+=str[i]+".";
        return (strf+str[0]);
    }
};