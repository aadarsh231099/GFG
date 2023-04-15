//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
public:
    long long merge(vector<long long> &arr, int low, int mid, int high)
    {
        int n1 = mid - low + 1;        
        int n2 = high - mid;          
        vector<long long> left(n1);   
        vector<long long> right(n2);   
        for (int i = 0; i < n1; i++)
            left[i] = arr[low + i];
        for (int j = 0; j < n2; j++)
            right[j] = arr[mid + 1 + j];
        long long inv = 0; 
        int i = 0;                
        int j = 0;                
        int k = low;        
        while (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
                arr[k++] = left[i++];
            else
            {
                arr[k++] = right[j++];
                inv += (n1 - i);
            }
        }
        while (i < n1)
        {
            arr[k++] = left[i++];
        }
        while (j < n2)
            arr[k++] = right[j++];
        return inv;
    }

    long long mergeSort(vector<long long> &arr, int low, int high)
    {
        if (low < high)
        {
            int mid = low + (high - low) / 2; 
            long long inv = 0;        
            inv += mergeSort(arr, low, mid);
            inv += mergeSort(arr, mid + 1, high);
            inv += merge(arr, low, mid, high);
            return inv;
        }
        return 0;
    }

    long long inversionCount(long long arr[], long long N)
    {
        vector<long long> v(arr, arr + N);
        return mergeSort(v, 0, N - 1);      
    }
};



//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends