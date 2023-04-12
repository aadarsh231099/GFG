//https://practice.geeksforgeeks.org/problems/path-of-greater-than-equal-to-k-length1034/1
//Path of greater than equal to k length

class Solution {
public:
    bool f(int i,vector<int> &v,int k,vector<pair<int,int>> adj[]){
        if(k<=0) return true;
        v[i]=1;
        for(auto it:adj[i]){
            if(!v[it.first]){
                if(f(it.first,v,k-it.second,adj)) return true;
            }
        }
        v[i]=0;
        return false;
    }
    bool pathMoreThanK(int n,int e,int k,int *a) 
    { 
       //  Code Here
       vector<pair<int,int>> adj[n];
       for(int i=0;i<3*e;i+=3){
           adj[a[i]].push_back({a[i+1],a[i+2]});
           adj[a[i+1]].push_back({a[i],a[i+2]});
       }
       vector<int> v(n,0);
       return f(0,v,k,adj);
    } 
};

