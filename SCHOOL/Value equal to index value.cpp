//https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/0
//Value equal to index value
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> res;
	    for(int i=0;i<n;i++){
	    if(arr[i]==i+1)
	    res.push_back(i+1);}
	    return res;
	}
};