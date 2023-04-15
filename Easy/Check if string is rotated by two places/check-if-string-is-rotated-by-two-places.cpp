
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str2.size()!=str1.size()){
            return false;
        }
 
        int n= str1.size();
        if(str1[0]==str2[n-2]&& str1[1]==str2[n-1]){
            for(int i=2; i<str1.size(); i++){
                if(str1[i]!=str2[i-2]){
                    return false;
                }
            }
        }
        else if(str1[n-1]==str2[1]&& str1[n-2]==str2[0]){
            for(int i=2; i<str1.size(); i++){
                if(str2[i]!=str1[i-2]){
                    return false;
                }
            }
        }
        else return false;
        return true;
    }

};
