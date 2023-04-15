//https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/0
//Quick Left Rotation

class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   int temp[n];
	   for (int i = 0; i < n; i++)
	   {
	       temp[i]=arr[i];
	   }
	   for(int i=0;i<n;i++)
	   {
	       arr[i]=temp[((k%n)+i)%n];
	   }
	   
	} 
		 

};