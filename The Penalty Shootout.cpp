//https://practice.geeksforgeeks.org/problems/the-penalty-shootout3810/0
//The Penalty Shootout

//User function template for C++
class Solution{
public:	
	
	int penaltyScore(string s)
	{
	    // Your code goes here
	    int g=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='2'){
	            if(s[i+1]=='1')g++;
	            else if(s[i+1]=='0' || s[i+1]=='2')continue;
	    }
	    }return g;
	}
};