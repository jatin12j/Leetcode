class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);

        for(int i=0;i<n;i++){

            int jump=nums[i];
            int index=(i+jump)%n;

            if(index<0)
            index +=n;

            res[i]=nums[index];
        }
        return res;
    }
};