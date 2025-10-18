class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
            return false;
        
        long long rem,ans=0,num=x;
        while(num!=0){
            rem = num%10;
            num/=10;
            ans = ans*10+rem;
        }
        return (ans==x);
    }
};