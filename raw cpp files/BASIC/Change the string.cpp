//https://practice.geeksforgeeks.org/problems/change-the-string3541/0
//Change the string


class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        if(islower(s[0]))
        transform(s.begin(),s.end(),s.begin(),::tolower);
        else if(isupper(s[0]))
        transform(s.begin(),s.end(),s.begin(),::toupper);
        return s;
    }
};