//https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/0
//Find Transition Point



int transitionPoint(int arr[], int n) {
    // code her
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        return i;
    }return -1;
}