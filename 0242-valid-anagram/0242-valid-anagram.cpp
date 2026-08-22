class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=s.length();
        int b=t.length();
        if(a!=b) return false;
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            mp[c]--;
        }
        for(auto it:mp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};