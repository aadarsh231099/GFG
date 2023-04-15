//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       if(n==1)
       return {1};
       stack<pair<int,int>>s;
       int c=1;
       s.push({price[0],1});
       vector<int>ans;
       ans.push_back(1);
       for(int i=1;i<n;i++){
           if((!s.empty())&&price[i]>=s.top().first){
           while((!s.empty())&&price[i]>=s.top().first){
               c+=s.top().second;
               s.pop();
           }
           s.push({price[i],c});
           ans.push_back(c);
           }
           else{
               ans.push_back(c);
               s.push({price[i],c});
           }
           c=1;
       }
       return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends