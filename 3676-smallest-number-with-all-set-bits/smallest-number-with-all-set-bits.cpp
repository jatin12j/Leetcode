class Solution {
public:

    bool isAllBitSet(int x){
        return (x & (x+1))==0;
    }
    int smallestNumber(int n) {
        int result = n;
        
        while(!isAllBitSet(result)){
            result++;
        }
        return result;
    }
};