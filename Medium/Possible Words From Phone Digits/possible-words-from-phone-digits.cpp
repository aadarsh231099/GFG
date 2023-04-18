//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string>res;
    vector<string>st={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void func(int a[],string temp,int i,int n){
        if(i==n){
            res.push_back(temp);
            return;
        }
        for(int j=0;j<st[a[i]].size();j++){
            func(a,temp+st[a[i]][j],i+1,n);
        }
    }
    vector<string> possibleWords(int a[],int N)
    {
        //Your code here
        func(a,"",0,N);
        return res;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends