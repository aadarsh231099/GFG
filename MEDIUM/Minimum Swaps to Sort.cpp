//https://practice.geeksforgeeks.org/problems/minimum-swaps/1
//Minimum Swaps to Sort



class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>> v(nums.size());
        for(int i=0;i<nums.size();i++)
        v[i]={nums[i],i};
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==v[i].second)
            continue;
            else
            {
                cnt++;
                swap(v[i],v[v[i].second]);
                i--;
        }
    }
    return cnt;
	}
};