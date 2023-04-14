//https://practice.geeksforgeeks.org/problems/number-of-pairs3422/1
//Number of pairs

//User function template for C++

class Solution{   
public:
int count(int x,int Y[],int n,int cntY[]) {
        if (x==1)  return 0;
        int* idx=upper_bound(Y,Y+n,x);
        int ans=(Y+n)-idx;
        ans+=cntY[1];
        if (x==2)ans-=(cntY[3]+cntY[4]);
        if (x==3)ans+=cntY[2];
        return ans;
}
    long long countPairs(int X[], int Y[], int m, int n) {
        // code here
        int check[5]={0};
        for (int i=0;i<n;i++)
            if (Y[i]<5) check[Y[i]]++;
        sort(Y,Y+n);
        long long ans=0;
        for (int i=0;i<m;i++) {
            ans+=count(X[i],Y,n,check);
        }
        return ans;
    }
};