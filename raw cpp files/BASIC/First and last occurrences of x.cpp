//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/0
//First and last occurrences of x

vector<int> find(int arr[], int n , int x )
{
    // code here
    int pos=0,pos1=0;
    vector<int> v;
    sort(arr,arr+n);
    int i=0,j=0,c=0;
    for(i=0;i<n;i++)
    {
    if(arr[i]==x)
    {pos=i;c++;break;}}
    if(c>0)
    v.push_back(i);
    else
    v.push_back(-1);
    reverse(arr,arr+n);
    for(j=0;j<n;j++){
    if(arr[j]==x)
    {pos1=j;break;}}
    v.push_back(n-j-1);
    return v;
    
}