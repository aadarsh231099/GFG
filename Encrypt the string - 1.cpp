//https://practice.geeksforgeeks.org/problems/encrypt-the-string-10337/0
//Encrypt the string - 1


class Solution{
    public:
    string encryptString(string s){
    // code here
        int cnt=1;
        string tmp;
        for (int j=1;j<s.length()+1;j++)
        {
            if(s[j]!=s[j-1])
            {
                tmp+=s[j-1];
                tmp+=to_string(cnt);
                cnt=1;
            }
            else cnt++;
        }
        reverse(tmp.begin(),tmp.end());
        return tmp;
    }
};