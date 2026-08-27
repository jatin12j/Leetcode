class Solution {
public:
    int maxVowels(string s, int k) {
        // fixed window problem
        int n=s.length();
        int cnt=0;
        int maxcnt=0;
        //first window
        for(int j=0;j<k;j++){
            if(s[j]=='a' || s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                cnt++;
            }
        }
        maxcnt = cnt;
        // move the window now 
        for(int j=k;j<n;j++){
            if(s[j]=='a' || s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                cnt++;
            }
            // remove the leaving char
            if(s[j-k]=='a' || s[j-k]=='e'||s[j-k]=='i'||s[j-k]=='o'||s[j-k]=='u'){
                cnt--;
            }
            maxcnt = max(maxcnt,cnt);
        }
        return maxcnt;
    }
};