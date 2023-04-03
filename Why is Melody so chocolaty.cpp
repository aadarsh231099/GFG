//https://practice.geeksforgeeks.org/problems/why-is-melody-so-chocolaty0446/0
//Why is Melody so chocolaty



int max_adjacent_sum(int arr[], int n)
{
    // Complete the function
    int max=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if((arr[i]+arr[i+1])>max)
        max=arr[i]+arr[i+1];
    }
    return max;
}