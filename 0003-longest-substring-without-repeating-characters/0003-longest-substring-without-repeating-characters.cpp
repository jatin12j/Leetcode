class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        //sliding window
        int i=0;
        int j=0;
        int maxlen=0;
        unordered_map<char,int>mp;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                if(mp[s[j]]>=i){
                    i=mp[s[j]]+1;  // putting ahead of j in map
                }
            }
            maxlen = max(maxlen,j-i+1);
            mp[s[j]]=j; //putting value in map
            j++;
        }
        return maxlen;
    }
};