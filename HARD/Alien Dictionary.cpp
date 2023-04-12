//https://practice.geeksforgeeks.org/problems/alien-dictionary/0
//Alien Dictionary


// User function Template for C++

class Solution{
    public:
    void topologicalSort(int v,vector<vector<int>>& adjList,vector<bool>& visited,stack<int>& stk) {
        visited[v]=true;
        for (int i=0;i<adjList[v].size();i++) {
            int next=adjList[v][i];
            if (!visited[next]) {
                topologicalSort(next,adjList,visited,stk);
            }
        }
        stk.push(v);
    }
    string findOrder(string dict[],int N,int K) {
        unordered_set<char> uniqueChars;
        for (int i=0;i<N;i++) {
            for (char c:dict[i]) {
                uniqueChars.insert(c);
            }
        }
        vector<vector<int>> adjList(26);
        vector<bool> visited(26,false);
        for (int i=0;i< N-1;i++) {
            string w1=dict[i];
            string w2=dict[i + 1];
            for (int j=0;j<min(w1.length(),w2.length());j++) {
                if (w1[j]!=w2[j]) {
                    adjList[w1[j]-'a'].push_back(w2[j]-'a');
                    break; 
                }
            }
        }
        stack<int> stk;
        for (char c:uniqueChars) {
            if (!visited[c-'a']) {
                topologicalSort(c-'a',adjList,visited,stk);
            }
        }
        string order="";
        while (!stk.empty()) {
            order+=(char)(stk.top()+'a');
            stk.pop();
        }
        return order;
    }
};