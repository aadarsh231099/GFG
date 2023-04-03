//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/0
//Find minimum and maximum element in an array



pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n);
    return {a[0],a[n-1]};
    
}