class Solution {
public:
    long long p=1000000007;
    long long pw(long long a,long long b){
        long long x=1;
        while(b){
            if(b&1) x=x*a%p;
            a=a*a%p;
            b>>=1;
        }
        return x;
    }
    int numberOfSets(int n, int k) {
        long long a=1,b=1;
        for(int i=0;i<2*k;i++){
            a=a*((n+k-1-i)%p)%p;
            b=b*(i+1)%p;
        }
        return a*pw(b,p-2)%p;
    }
};