//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int r,s=0;
    while(n){
        r=n%10;
        if(r==0)r=5;
        s=s*10+r;
        n=n/10;
    }
    int rem,num=0;
    while(s){
        rem=s%10;
        num=num*10+rem;
        s=s/10;
    }return num;
}