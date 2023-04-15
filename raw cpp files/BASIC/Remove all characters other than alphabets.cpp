//https://practice.geeksforgeeks.org/problems/remove-all-characters-other-than-alphabets4923/0
//Remove all characters other than alphabets

//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        int j=0,c=0;string str;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])==0)
            {s.erase(i,1);i--;}
            else c++;
            } if(c>0)return s;
            else return "-1";
    }
};