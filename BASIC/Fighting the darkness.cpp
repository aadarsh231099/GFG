//https://practice.geeksforgeeks.org/problems/fighting-the-darkness3949/0
//Fighting the darkness

//User function template for C++

class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here  
        sort(arr,arr+n);
        return arr[n-1];
    }
};