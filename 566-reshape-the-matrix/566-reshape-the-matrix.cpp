class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int old_r, old_c;
        old_r = mat.size();
        old_c = mat[0].size();
        
        if(old_r*old_c != r*c){
            return mat;
        }
        
        vector<vector<int>> newMat;
        int newCol=0;
        vector<int> rowVec;
        for(int row = 0; row < old_r; row++){
            for(int col = 0; col < old_c; col++){
                if(newCol >= c){
                    newCol = 0;
                    newMat.push_back(rowVec);
                    rowVec = {};
                }
                rowVec.push_back(mat[row][col]);
                newCol++;
                
            }
        }
        newMat.push_back(rowVec);
        return newMat;
    }
};