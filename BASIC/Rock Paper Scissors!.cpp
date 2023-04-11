//https://practice.geeksforgeeks.org/problems/rock-paper-scissors2830/0
//Rock Paper Scissors!



class Solution
{
  public:
    string gameResult (string s)
        {
            //code here.
            if(s[0]==s[1])return "DRAW";
            else if((s[0]=='R' && s[1]=='S')||(s[0]=='S' && s[1]=='P')||(s[0]=='P' && s[1]=='R'))return "A";
            else
            return "B";
        }
};