class Solution {
public:
    string reverseWords(string s) {
        int n=s.length(); 
        reverse(s.begin(),s.end());
        int i=0;// first word
        int l=0; //starting 
        int r=0; // correct ans
        while(i<n){
            while(i<n && s[i]!=' '){
                s[r++] = s[i++];
            }
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]= ' ';
                r++;
                l=r; // means next step starting after this index

            }
            i++;
        }
        return s.substr(0,r-1);
    }
};