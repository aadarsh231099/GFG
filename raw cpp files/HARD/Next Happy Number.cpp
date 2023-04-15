//https://practice.geeksforgeeks.org/problems/next-happy-number4538/0
//Next Happy Number

class Solution{
public:

    bool solve(int N) {
        if(N==1 || N==7)
            return true;
        if(N<=9) return false;
        int sum=0;
        while(N!=0) {
            int digit=N % 10;
            sum+=pow(digit, 2);
            N/=10;
        }
        return solve(sum);
    }
    int nextHappy(int N){
        // code here
        ++N;
        while(true) {
            if(solve(N)) return N;
            else ++N;
        }
        return 0;
    }
};