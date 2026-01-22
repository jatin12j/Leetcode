// TIME LIMIT EXCEED----------

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             int mul=1;
//             for(int j=0;j<n;j++){
//                 if(i==j) continue;
//                 mul*=nums[j];
//             }
//             ans.push_back(mul);
//         }
//         return ans;
//     }
// };

// by Prefix and Suffix--------
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);

        //prefix
        for(int i=1;i<n;i++){
            ans[i]= nums[i-1]*ans[i-1];
        }

        //suffix
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=suffix;
            suffix*=nums[i];
        }
        return ans;
    }
};