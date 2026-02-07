class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b') count++;
            if(s[i]=='a' && count>0){
            count--;
            ans++;
            }
        }
        return ans;
    }
};