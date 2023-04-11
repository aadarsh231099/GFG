//https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string-1587115621/0
//Sum of numbers in string


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code her
    	string s;
    	int sum=0;
    	for(int i=0;i<str.length();i++)
    	{
    	    if(isdigit(str[i]))
    	    s+=str[i];
    	    else
    	    {
    	        sum+=atoi(s.c_str());
    	        s="";
    	    }
    	}return (sum+atoi(s.c_str()));
    }
};