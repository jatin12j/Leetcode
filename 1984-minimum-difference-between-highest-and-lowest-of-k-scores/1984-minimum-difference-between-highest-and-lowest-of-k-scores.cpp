class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==1) return 0;
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        for(int left=0 ,right=k-1;right<n;left++ ,right++){
            diff=min(diff,nums[right]-nums[left]);
        }
        return diff;
    }
};