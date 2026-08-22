class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        stack<int>st;
        for(char c:s){
            st.push(c);
        }
        for(int i=0;i<n;i++){
            s[i]=st.top();
            st.pop();
        }
        
    }
};