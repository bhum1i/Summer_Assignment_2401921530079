class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m==r&&n==c){
            return mat;
        }
        if(m*n!=r*c){
            return mat;
        }
        vector<vector<int>> reshaped(r, vector<int>(c,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int index = i*n+j;
                int nr = index/c;
                int nc = index%c;
                reshaped[nr][nc] = mat[i][j];
            }
        }
        return reshaped;

    }
};