//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        bool check(vector<int>dif,int k,int w,int t){
            int p=0;
            for(int i=0;i<dif.size();i++){
                dif[i]+=p;
                p=dif[i];
                if(dif[i]>=t)
                    continue;
                k-=(t-dif[i]);
                if(k<0)
                    return 0;
                if(i+w<dif.size())
                    dif[i+w]-=(t-dif[i]);
                p=t;
            }
            return 1;
        }
        long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)
        {
            // code here
            vector<int> dif(n);
            dif[0]=a[0];
            int minH=a[0];
            for(int i=1;i<n;i++){
                dif[i]=a[i]-a[i-1];
                minH=min(a[i],minH);
            }
            
            int maxH=minH+k;
            
            long long ans;
            while(minH<=maxH){
                int t=(minH+maxH)/2;
                if(check(dif,k,w,t)){
                    ans=t;
                    minH=t+1;
                }
                else
                    maxH=t-1;
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
        int n,k,w;
        cin>>n>>k>>w;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        cout<<s.maximizeMinHeight(n,k,w,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends