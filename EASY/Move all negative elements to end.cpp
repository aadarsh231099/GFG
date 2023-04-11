//https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/0
//Move all negative elements to end

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int c=0,temp[n];
        for(int i=0;i<n;i++){
        if(arr[i]>=0)
        temp[c++]=arr[i];
        }
        if(c==0||c==n)
        return;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            temp[c++]=arr[i];
        }
        for(int i=0;i<n;i++)
        arr[i]=temp[i];
    }
};