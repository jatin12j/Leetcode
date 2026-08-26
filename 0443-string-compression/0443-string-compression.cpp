class Solution {
public:
    int compress(vector<char>& chars) {
        //doing and modify this char only 
        // 2 pointer problem
        int n=chars.size();
        int i=0;
        int write=0; // for making changes in this array 
        while(i<n){
            //iterate group wise 
            int j=i;
            while(j<n && chars[j]==chars[i]){
                j++;
            }
            int count = j-i;  //counting length of group same
            chars[write++]=chars[i]; //putting that character
            if(count>1){
                string cnt = to_string(count);
                for(char c:cnt){
                    chars[write++]=c;
                }

            }
            i=j;
        }
        return write;
    }
};