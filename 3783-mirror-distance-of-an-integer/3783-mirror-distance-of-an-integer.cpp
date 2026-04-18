class Solution {
public:
    int mirrorDistance(int n) {
        int rem=0;
        int num=0;
        int ans=n;
        while(ans!=0){
            rem=ans%10;
             num=num*10+rem;
            ans/=10;
        }
        
        return abs(n-num);
    }
};