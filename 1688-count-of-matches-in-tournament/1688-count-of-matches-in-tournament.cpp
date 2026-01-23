class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        int team=0;
        int sum=0;
        while(n>1){
            match =n/2;
            team = n-match;
             sum+=match;
            n=team;
        }
        return sum;
    }
};