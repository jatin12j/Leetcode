class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        sort(strs.begin(),strs.end());
        if(strs.empty()) return ""; //base case
        string ans ="";
        string left = strs[0];
        string right = strs[n-1];
        int minlen = min(left.size(),right.size());
        for(int i=0;i<minlen;i++){
            if(left[i]!=right[i]) break;

            ans += left[i];
        }  
        return ans;
    }
};