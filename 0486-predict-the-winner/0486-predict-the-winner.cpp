class Solution {
public:
    int solve(int i,int j,vector<int>& nums){
       if(i>j) return 0;
       if(i==j) return nums[i];
       int i_took = nums[i]+ min(solve(i+2,j,nums),solve(i+1,j-1,nums));
       int j_took = nums[j]+ min(solve(i,j-2,nums),solve(i+1,j-1,nums));
       return max(i_took,j_took);

    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int total = accumulate(begin(nums),end(nums),0);
        int first = solve(0,n-1,nums);
        int second = total - first;
        return first >= second;
    }
};