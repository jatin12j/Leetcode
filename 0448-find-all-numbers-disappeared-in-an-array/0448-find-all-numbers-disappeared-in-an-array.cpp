class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n+1,0);
        vector<int> ans;

        //phle freq count krenge--
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        //bss print krdenge---
        int mis=-1;
        for(int i=1;i<=n;i++){
            if(freq[i]==0)
            ans.push_back(i);
        }
        return ans;
    }
};