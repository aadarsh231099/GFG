//https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
//Majority Element

//User function template for C++

class Solution{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int can = a[0];
        int cnt = 1; 
        for(int i = 1; i < size; i++){
            if(a[i] == can)
                cnt++;
            else
                cnt--;
            if(cnt == 0){ 
                can = a[i];
                cnt = 1;
            }
        }
        cnt = 0;
        for(int i = 0; i < size; i++){
            if(a[i] == can)
                cnt++;
        }
        if(cnt > size/2)
            return can;
        else
            return -1;
    }
};