//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
//Trapping Rain Water


class Solution
{
public:
    long long trappingWater(int arr[], int n)
    {
        int left=0,right=n-1,leftMax=0,rightMax=0;   
        long long total=0; 
        while (left<right)
        {
            if (arr[left]<arr[right])
            {
                if (arr[left]>leftMax)
                    leftMax=arr[left];
                else
                    total+=leftMax-arr[left];
                left++;
            }
            else
            {
                if (arr[right]>rightMax)
                    rightMax=arr[right];
                else
                    total+=rightMax-arr[right];
                right--;
            }
        }
        return total;
    }
};