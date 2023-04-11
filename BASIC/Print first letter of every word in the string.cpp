//https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/0
//Print first letter of every word in the string

//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string s="";
	    s=s+S[0];
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]==' ')
	        s+=S[i+1];
	    }return s;
	}
};