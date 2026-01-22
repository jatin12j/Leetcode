class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++){
               int left_sum=0;
               int right_sum=0;
            for(int j=0;j<i;j++){
                left_sum+=nums[j];
            }
            for(int k=i+1;k<n;k++){
                right_sum+=nums[k];
            }
            if(left_sum==right_sum) 
            return i;
        }
        return -1;
    }
        
};
