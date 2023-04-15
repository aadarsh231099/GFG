//https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/0
//Maximize sum(arr[i]i) of an Array

class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        sum+=a[i]*i;
        return sum%1000000007;
    }
};