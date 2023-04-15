//https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/0
//Find triplets with zero sum

/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++)
        {
            int s=i+1,e=n-1;
            while(s<e){
            if((arr[s]+arr[i]+arr[e])==0)
            {s++;e--;return true;}
            else if((arr[s]+arr[i]+arr[e])<0)
            {
                s++;
            }
            else
            e--;
        }
    }return false;
    }
};