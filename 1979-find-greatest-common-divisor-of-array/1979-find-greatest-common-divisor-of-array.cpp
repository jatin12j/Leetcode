class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        ans = std::gcd(nums[0],nums[n-1]);
        
        return ans;
    }
};