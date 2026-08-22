class Solution {
public:
    int firstUniqChar(string s) {
        int a=s.length();
        unordered_map<char,int>mp;
        for(int c:s){
            mp[c]++;
        }
        for(int i=0;i<a;i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;

    }
};