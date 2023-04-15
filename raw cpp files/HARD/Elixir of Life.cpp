//https://practice.geeksforgeeks.org/problems/20290dc4188d384ae1f17d6a14bd2c95ea7012a8/0
//Elixir of Life

//User function strlate for C++

class Solution
{
    public:
    int maxFrequency(string S)
    {
    	// code here
    	int res=1;
        int n=S.size();
        string str;;
    	for(int i=0;i<n;i++){
    	    string s1=S.substr(0,i+1);
    	    string s2=S.substr(n-i-1,i+1);
    	    if(s1==s2){
    	        str=s1;
    	        break;
    	    }
    	}
    	for(int i=str.size();i<n;i++){
    	    res+=(str==S.substr(i,str.size()));
    	}
    	return res;
    }
};