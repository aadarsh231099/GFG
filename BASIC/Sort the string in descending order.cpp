//https://practice.geeksforgeeks.org/problems/sort-the-string-in-descending-order3542/0
//Sort the string in descending order


string ReverseSort(string str){
    //complete the function here
    sort(str.begin(),str.end(),greater<char>());
    return str;
}