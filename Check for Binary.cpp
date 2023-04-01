//https://practice.geeksforgeeks.org/problems/check-for-binary/0
//Check for Binary

// Return true if str is binary, else false
bool isBinary(string str)
{
   // Your code here
   for(int i=0;i<str.length();i++)
   {
       if(str[i]!='0' && str[i]!='1')
       return false;
   }return true;
}