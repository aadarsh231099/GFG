//https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/0
//Find all pairs with a given sum


class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        unordered_set<int> s;
        vector<pair<int, int>> vp;
        sort(A,A+N);
    	    
        for(int i = 0;i<M;i++)
            s.insert(B[i]);
        
        for(int i = 0;i<N;i++){
            if(s.find(X-A[i])!=s.end()){
                vp.push_back({A[i],X-A[i]});
            }
        }
        return vp;
    }
};