class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int total = n*n;
        vector<int> freq(total+1,0);

        //freq find krenge----
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }

        //missing and max frequency ke liye ---
        int mis = -1;
        int rep = -1;

        for(int i=1;i<=total;i++){
            if(freq[i]==0){
                mis = i;
            }
            else if(freq[i]==2){
                rep = i;
            }
        }
        return {rep,mis};
    }
};