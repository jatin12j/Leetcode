class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};