//https://practice.geeksforgeeks.org/problems/59dfb26eb6c659e6e5f60869ac335f450f97165a/1
//Shy Geek

//User function Template for Java

/*
Instructions - 

    1. 'shop' is object of class Shop.
    2. User 'shop.get(int i)' to enquire about the price
            of the i^th chocolate.
    3. Every chocolate in shop is arranged in increasing order
            i.e. shop.get(i) <= shop.get(i + 1) for all 0 <= i < n - 1
*/


class Solution{
    public:
    
    Shop shop;
    Solution(Shop s)
    {
        this->shop=s;
    }
    long long find(int n,long k){
        // Return the number of chocolates Geek had
        // enjoyed out of 'n' chocolates availabe in the
        // 'shop'.
        long long low=0,high=n-1,res=0,index,val;
        while(k>0) {
            index=val=-1;
            while(low<=high){
                int mid=(low+high)/2;
                int cur=shop.get(mid);
                if(cur>k) high=mid-1;
                else{
                    index=mid;
                    val=cur;
                    low=mid+1;
                }
            }
            if(index==-1) break;
            low=0,high=index-1;
            res+=k/val;
            k%=val;
        }
        return res;
    }

};