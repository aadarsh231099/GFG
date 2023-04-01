//https://practice.geeksforgeeks.org/problems/display-longest-name0853/0
//Display longest name

//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
        int max=0,pos=0;
        for(int i=0;i<n;i++){
        if(names[i].length()>max)
        {
            max=names[i].length();
            pos=i;
        }
        }return names[pos];
    }
};