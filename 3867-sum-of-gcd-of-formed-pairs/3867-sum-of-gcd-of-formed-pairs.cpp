class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n);
        int mx=0;
        for(int i=0;i<n;i++){
            mx = max(nums[i],mx);
            arr[i]=std::gcd(nums[i],mx);
        }
        sort(arr.begin(),arr.end());
        long long ans=0;
        int l=0,r=n-1;
        while(l<r){
            ans+=std::gcd(arr[l],arr[r]);
            l++;
            r--;
        }
        return ans;
    }
};