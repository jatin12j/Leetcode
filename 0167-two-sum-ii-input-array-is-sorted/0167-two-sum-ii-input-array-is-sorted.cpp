class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //-------we can use this also as 2 sum 
    //     int n=nums.size();
    //     unordered_map<int,int>mp;
    //     for(int i=0;i<n;i++){
    //         long long rem = target - nums[i];
    //         if(mp.find(rem)!=mp.end()){
    //             return {mp[rem]+1,i+1};
    //         }
    //         mp[nums[i]]=i;
    //     }
    //     return {};


    // new idea is so array is sorted so we have to use 2 pointer
    int n=nums.size();
    int left=0;
    int right= n-1;
    while(left<right){
        int sum = nums[left]+nums[right];
        if(sum==target){
            return {left+1,right+1};
        }
        else if(sum>target){
            right--;
        }else{
            left++;
        }
            }
            return {};
     }
};