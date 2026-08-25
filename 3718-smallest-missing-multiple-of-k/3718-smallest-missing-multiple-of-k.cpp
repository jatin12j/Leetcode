class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int mul=k;
        while(true){
            bool find = false;
            for(int i=0;i<n;i++){
                if(nums[i]==mul){
                    find = true;
                    break;
                }
            }
            if(!find){
                    return mul;
                }
            mul +=k;
        }
        
    }
};