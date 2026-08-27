class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k=k%n; // reducing recycle
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
       
    }
};