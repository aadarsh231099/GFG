//https://practice.geeksforgeeks.org/problems/rotation4723/0
//Rotation

//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int min=arr[0],p=0;
	    for(int i=0;i<n;i++)
	    {
	        if(min>arr[i])
	        {min=arr[i];
	        p=i;}
	    }return p;
	}

};