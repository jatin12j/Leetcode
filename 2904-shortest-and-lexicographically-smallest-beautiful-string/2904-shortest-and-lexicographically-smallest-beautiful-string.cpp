class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n= s.length();
        int i=0;
        int j=0;
        int minlen=INT_MAX;
        int ones=0;
        string ans="";
        while(j<n){
            if(s[j]=='1')ones++;
            while(ones==k){
                int len =j-i+1;
                if(len<minlen){
                    minlen = len;
                    ans = s.substr(i,len);
                }
                else if(len==minlen){
                    string temp = s.substr(i,len);
                    if(temp<ans)
                    ans = temp;
                }
                if(s[i]=='1'){
                    ones--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};