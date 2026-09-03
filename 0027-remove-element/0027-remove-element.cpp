class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // -------I understand something else in this------
        // int n=nums.size();
        // unordered_map<int,int>mp;
        // for(int c:nums){
        //     mp[c]++;
        // }
        // for(auto it:mp){
        //     if(it.first==val){
        //         return n-it.second;
        //     }
        // }
        // return k;
        //--------------------------------------

        // by 2 pointer approach
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};