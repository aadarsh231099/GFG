//https://practice.geeksforgeeks.org/problems/array-partition/0
//Array Partition

//User function Template for C++

class Solution{
    public:
    bool partitionArray(int N, int K, int M, vector<int> &A){
        // code here
        sort(A.begin(), A.end());
        deque <int> q;
        q.push_back(0);
        for(int i=K-1; i<N; i++){
            while(i-q.front()+1 >= K){
                if(A[i]-A[q.front()] <= M){
                    q.push_back(i+1);
                    break;
                }
                q.pop_front();
                if(q.empty())
                    return false;
            }
        }
        return q.back() == N;
    }
};