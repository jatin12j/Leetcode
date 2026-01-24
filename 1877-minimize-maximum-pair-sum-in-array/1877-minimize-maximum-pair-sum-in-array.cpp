class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0;
        int end=n-1;
        int max_sum=0;

        while(start<end){
            int sum=nums[start]+nums[end];
            max_sum = max(max_sum,sum);
            start++;
            end--;
        }   
        return max_sum;
    }
};