class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        long long moves=0;
        for(int x:nums){
            if(x!=maxi){
                moves += abs(x-maxi);
            }
        }
        return moves;
    }
};