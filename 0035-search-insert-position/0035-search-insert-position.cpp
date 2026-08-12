class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int end = n-1;
        int ans = nums.size();
        while(s<=end){
            int mid = (s+end)/2;
            if(nums[mid]>=target){
                ans = mid;
                end = mid-1;
            }
            else {
                s = mid+1;
            }
        } 
        return ans;       
    }
};