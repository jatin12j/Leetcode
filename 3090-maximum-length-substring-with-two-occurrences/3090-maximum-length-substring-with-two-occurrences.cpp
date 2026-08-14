class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0;
        int r=0;
        int n=s.size();
        int maxi=0;
        unordered_map<char,int>mp;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            maxi = max(maxi,r-l+1);
            r++;
                    }
        return maxi;
    }
};