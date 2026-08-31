class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0; // fixed first index for moving
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }
};