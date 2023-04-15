//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
//Maximum of all subarrays of size k

//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int>q;
        vector<int>ans;
        for(int i=0;i<k;i++){
            while(!q.empty()&&arr[i]>=arr[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        for(int i=k;i<n;i++){
            ans.push_back(arr[q.front()]);
            while(!q.empty()&&q.front()<=i-k){
                q.pop_front();
            }
            while(!q.empty()&&arr[i]>=arr[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(arr[q.front()]);
        return ans;
    }
};