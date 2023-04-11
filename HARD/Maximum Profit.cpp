//https://practice.geeksforgeeks.org/problems/maximum-profit4657/0
//Maximum Profit

// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
        vector<int> prev(N, 0);
        vector<int> curr(N, 0);
        for(int i=1;i<=K;i++){
            for(int j=1;j<N;j++){
                curr[j]=curr[j-1];
                for(int m=0;m<j;m++){
                    curr[j]=max(curr[j],prev[m]+A[j]-A[m]);
                }
            }
            for(int i=0;i<N;i++){
                prev[i]=curr[i];
            }
        }
        return curr[N-1];
    }
};