//https://practice.geeksforgeeks.org/problems/find-number-of-numbers/0
//Find Number of Numbers



/*Complete the function given below*/
int num(int a[], int n, int k)
{
     //add code here.
     int num=0,c=0;
     for(int i=0;i<n;i++)
     {
         num=a[i];
         while(num)
         {
             if(num%10==k)c++;
             num=num/10;
         }
     }return c++;
}