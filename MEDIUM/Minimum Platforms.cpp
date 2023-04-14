//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
//Minimum Platforms


class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1,j=0,c=1,mx=1;
    	while(i<n&&j<n){
    	    if(arr[i]<=dep[j]){
    	        c=c+1;
    	        i++;
    	    }
    	    else{
    	        j++;
    	        c--;
    	    }
    	    mx=max(mx,c);
    	}
    	return mx;
    }
};