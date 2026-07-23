class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int cnt=0;
        for(int num:nums){
            cnt |= num;
        }
      
        return cnt+1;
    }
};