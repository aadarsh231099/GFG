//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/0
//Cyclically rotate an array by one



//User function Template for C++

void rotate(int arr[], int n)
{
    int temp=arr[n-1];
    for(int i=1;i<n;i++)
    {
        arr[n-i]=arr[n-i-1];
    }
    arr[0]=temp;
    
    
    
    
}