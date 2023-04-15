//https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1
//Rearrange Array Alternately


class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	// Your code here
    	long long int l=0,h=n-1,mx=arr[n-1]+1;
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        arr[i]+=(arr[h]%mx)*mx;
    	        h--;
    	    }
    	    else{
    	        arr[i]+=(arr[l]%mx)*mx;
    	        l++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	    arr[i]/=mx;
    }
};