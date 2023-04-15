//https://practice.geeksforgeeks.org/problems/longest-substring-containing-1/0
//longest substring containing '1'



int maxlength( string s)
{
// your code here
int m=0,c=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='1')c++;
    else
    {
        m=max(m,c);
        c=0;
    }
}return max(m,c);
}