//https://practice.geeksforgeeks.org/problems/count-of-smaller-elements5947/0
//Count of smaller elements

int countOfElements(int arr[], int n, int x) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x)count++;
    }return count;
}