class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;

        for(char c : n){
            int digit = c -'0';
            maxi = max(maxi,digit);
        }
       return maxi;
    }
};