class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int prod=1;
            int a=i;
            while(a>0){
                int digit = a%10;
                prod = digit*prod;
                a/=10;
            }
            if(prod%t==0)
            return i;
        }
      return -1;
    }
};