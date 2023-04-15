//https://practice.geeksforgeeks.org/problems/product-is-even-or-odd3020/0
//Product is even or odd


int EvenOdd(string n1 , string n2)
{
    //code here.
    if(n1[n1.length()-1]%2!=0 && n2[n2.length()-1]%2!=0)return 0;
    else
    return 1;
}