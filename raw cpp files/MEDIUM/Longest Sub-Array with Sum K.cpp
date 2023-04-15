//https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
//Longest Sub-Array with Sum K

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>m;
        int sum=0,j=0,ans=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K)
            ans=(i+1);
            if(m.find(sum-K)!=m.end()){
                ans=max(ans,i-m[sum-K]);
            }
            if(m.find(sum)==m.end())
            m[sum]=i;
        }
        return ans;
    } 

};