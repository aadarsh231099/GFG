//https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/0
//Bitonic Point

//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    if (n == 1)
        return 0;
        if (arr[0] >= arr[1])
        return 0;
        if (arr[n - 1] >= arr[n - 2])
        return arr[n - 1];
	    for(int i=1;i<n-1;i++)
	    {
	        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
	        return arr[i];
	    }
	}
};