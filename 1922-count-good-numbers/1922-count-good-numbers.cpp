class Solution {
public:
    long long MOD = 1e9 + 7;
    int countGoodNumbers(long long n) {
      long long even=5;
      long long odd=4;
      long long evenposition =(n+1)/2;
     long long oddposition=n/2;
     long long an1=mypow(5,evenposition);
     long long  an2=mypow(4,oddposition);
     return (an1*an2)%MOD;
    }
    long long mypow(long long n ,long long position ){
        if(position==0){
            return 1;
        }
        long long half=mypow(n,position/2);
        if(position%2==0){
            return (half*half) % MOD;
        }
        else{
            return (n*half*half)%MOD;
        }
    }
    
};