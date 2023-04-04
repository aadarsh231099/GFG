//https://practice.geeksforgeeks.org/problems/searching-a-number0324/0
//Searching a number

//User function template for C++
class Solution{
public:
	int search(int arr[], int n, int k) {
	    // code here
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==k)return i+1;
	    }return -1;
	}
};