class Solution {
public:
    int minimumPushes(string word) {
        int punch = 0;
        for(int i=0;i<word.size();i++){
            punch += (i/8)+1;
        }
        return punch;
    }
};