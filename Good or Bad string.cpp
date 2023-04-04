//https://practice.geeksforgeeks.org/problems/good-or-bad-string1417/0
//Good or Bad string

// User function template for C++

class Solution {
  public:
    int isGoodorBad(string S) {
        // code here
        int c=0,v=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
            {v++;c=0;if(v>5)return 0;
            }
            else if(S[i]=='?')
            {v++;
            c++;
            if(v>5 || c>3)return 0;
            }
            else
            {v=0;c++;if(c>3)return 0;
            }
        }return 1;
    }
};
