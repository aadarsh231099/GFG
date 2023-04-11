//https://practice.geeksforgeeks.org/problems/second-largest3735/0
//Second Largest


//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    for(int i=(n-1);i>0;i--)
	    {if(arr[i]==arr[i-1])
	    continue;
	    else
	    return arr[i-1];
	}return -1;
	}
};