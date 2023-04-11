//https://practice.geeksforgeeks.org/problems/sum-of-array2326/0
//Sum of Array

//User function template for C++
class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    int s=0;
	    for(int i=0;i<n;i++)
	    s+=arr[i];
	    return s;
	}
};