//https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/0
//Number of occurrence

//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==x)
	        c++;
	    }return c;
	    
	}
};