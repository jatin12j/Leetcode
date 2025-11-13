class Solution {
public:
    int mySqrt(int x) {

        if(x==0){
            return 0;
        }
        int start = 1, end = x ,mid , ans;
        while(start<=end){
            mid = start+ (end-start)/2;
            //mid * mid should be overflow so do this instead
            if(mid == x/mid){
                return mid;
            }
            else if(mid<x/mid){
                ans = mid;
                start=mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};