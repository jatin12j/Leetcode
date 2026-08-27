class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans=nums.size(); // if not found then return see tc 3
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]>=target){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;

            }
        }

        return ans;
    }
};