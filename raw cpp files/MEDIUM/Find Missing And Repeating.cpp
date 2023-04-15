//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
//Find Missing And Repeating


class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans=new int[2];
        int r=0,s=0,d=0,flag=0;
        for(int i=0;i<n;i++){
            arr[abs(arr[i])-1]*=-1;
            if(arr[abs(arr[i])-1]>0){
            r=abs(arr[i]);
            break;
            }
        }
        for(int i=1;i<=n;i++){
            d=d^i;
        }
        for(int i=0;i<n;i++){
            if(flag==1&&abs(arr[i])==r)
            continue;
            s=s^abs(arr[i]);
            if(abs(arr[i])==r)
            flag=1;
        }
        ans[0]=r;
        ans[1]=s^d;
        return ans;
    }
};