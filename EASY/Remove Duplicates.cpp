//https://practice.geeksforgeeks.org/problems/remove-duplicates3034/0
//Remove Duplicates

//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    
	    for(int i=0;i<S.length();i++){
	    if(S.find(S[i])!=i)
	    {
	        S.erase(i,1);
	        i--;
	    }
	}return S;
	}
};