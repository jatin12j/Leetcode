class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // sliding window problem 
        int n=nums.size();
        int i=0;
        int j=0;
        int maxlen=0;
        int zeros =0;
        while(j<n){
            if(nums[j]==0) zeros++;
            if(zeros>k){
                if(nums[i]==0) zeros--;
                i++;
            }
            if(zeros<=k){
                maxlen =max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
        
    }
};