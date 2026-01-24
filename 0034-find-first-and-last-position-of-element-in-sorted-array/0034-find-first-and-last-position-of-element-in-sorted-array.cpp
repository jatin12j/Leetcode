class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int up=n;
        vector<int> ans(2,-1);

        if(n==0)
        return ans;

        //for first
        while(low<up){
            int mid=low+(up-low)/2;
            if(nums[mid]>= target)
                up=mid;
            else
                low=mid+1;
        }

        if(low==n || nums[low]!=target)
        return ans;

        ans[0]=low;

        //for last
        up=n;
        while(low<up){
            int mid=low+(up-low)/2;
            if(nums[mid]> target)
                up=mid;
            else
                low=mid+1;
        }

        ans[1]=low-1;
       return ans; 
    }
};