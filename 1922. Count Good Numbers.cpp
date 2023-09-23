#define mod 1000000007
class Solution {
public:
    long long binpow(long long a,long long b){
        a%=mod;
        long long res=1;
        while(b>0){
            if(b&1){
                res=res*a%mod;
            }
            a=(a*a)%mod;
            b>>=1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=n/2 + n%2 ;
        return (binpow(4,odd)*binpow(5,even))%mod;
    }
};