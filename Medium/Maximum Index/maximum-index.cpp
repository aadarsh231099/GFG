class Solution{
public:
    int maxIndexDiff(int A[], int N) {
        // code here
        vector<int>v1(N);
        vector<int>v2(N);
        v1[0]=A[0];
        int mx=A[0];
        for(int i=1;i<N;i++){
            if(A[i]<mx){
                mx=A[i];
                v1[i]=mx;
            }
            else v1[i]=mx;
        }
        mx=A[N-1];
        v2[N-1]=mx;
        for(int i=N-2;i>=0;i--){
            if(A[i]>mx){
                mx=A[i];
                v2[i]=mx;
            }
            else v2[i]=mx;
        }
        int i=0,j=0;
        mx=0;
        while(i<N&&j<N){
            if(v1[i]<=v2[j]){
                mx=max(mx,j-i);
                j++;
            }
            else
            i++;
        }
        return mx;
    }

};
