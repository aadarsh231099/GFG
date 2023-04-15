//https://practice.geeksforgeeks.org/problems/magical-string3653/0
//Magical String[Duplicate Problem]

class Solution{   
public:
    string magicalString(string S){
        // code here 
        string b="abcdefghijklmnopqrstuvwxyz";
        int len=S.size();
        string ans="";
        
        for(int i=0;i<len;i++)
        {
            int d=(S[i]-'a');
            ans+=b[25-d];
        }
        return ans;
    }
};