//https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/0
//Sum of Array Elements

//User function Template for C++

//Complete this function

int sumElement(int arr[],int n)
{
    //Your code here
    int s=0;
    for(int i=0;i<n;i++)
    s+=arr[i];
    return s;
}