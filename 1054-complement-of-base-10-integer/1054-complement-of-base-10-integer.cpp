class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
        return true;
        }
        int rem,ans=0,mul=1;
        while(n){
            rem = n%2;
            rem = rem^1;
            n/=2;
            ans = ans+rem*mul;
            mul*=2;

        }
        return ans;
    }
};