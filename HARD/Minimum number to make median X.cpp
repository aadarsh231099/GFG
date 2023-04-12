//https://practice.geeksforgeeks.org/problems/minimum-number-to-make-median-x3029/1
//Minimum number to make median X

class Solution{
  public:
    int minimumAppend(int arr[], int num, int x)
    {
        // Complete the function
        int e=0,l=0,h=0;
        int gs=INT_MIN;
        int sg=INT_MAX;
        for(int i=0;i<num;i++){
            if(arr[i]==x)
                e++;
            else if(arr[i]<x){
                l++;
                gs=max(gs,arr[i]);
            }
            else{
                h++;
                sg=min(sg,arr[i]);
            }
        }
        int add=0;
        if(num%2==0){
            add=abs(h-l)-e+1;
            if(e!=1 && gs+sg==2*x){
                add--;
            }
        }
        else{
            if(e==1 || gs+sg==2*x){
                add=abs(h-l);
            }
            else if(gs+sg>2*x){
                if(l<h)
                    add=h-l+1;
                else
                    add=l-h;
            }
            else{
                if(l<h)
                    add=h-l;
                else
                    add=l-h+1;
            }
        }
        return add;
    }

};