class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int cnt=0;
        int longest =1;
        int just_prev=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==just_prev){
                cnt++;
                just_prev = nums[i];
            }
            else if(nums[i]!=just_prev){
                cnt=1;
                just_prev=nums[i];
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};