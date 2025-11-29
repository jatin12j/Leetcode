class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0 ;
        int ans = 0;

        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        if(sum % k == 0){
            return 0;
        }
        else if(sum<k){
            return sum;
        }
        else {
           int rem  = sum%k ;
           return rem;
        }  
    }  
};