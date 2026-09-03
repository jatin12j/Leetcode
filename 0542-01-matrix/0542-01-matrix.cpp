class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        // left and up
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                int up = 10000;
                int left = 10000;
                if(i>0){
                    up=mat[i-1][j];
                }
                if(j>0){
                    left=mat[i][j-1];
                }
                mat[i][j]=min(left,up)+1;
            }
            }
        }
        // now check for bottom right for even small
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(mat[i][j]!=1){ //some becomes 2 or 3 as well
                    int down = 10000;
                    int right = 10000;
                    if(i<m-1){
                        down = mat[i+1][j];
                    }
                    if(j<n-1){
                        right = mat[i][j+1];
                    }
                    mat[i][j]=min(mat[i][j],min(down,right)+1);
                }
            }
        }
        return mat;
    }
};