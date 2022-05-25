class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        set<int> unique;
        int m = mat.size(),sum = 0;
        
        for(int i = 0, j = m-1;i<m && j>=0;i++,j--){
            unique.insert((i*m)+i);
            sum+=mat[i][i];
            
            if(unique.find((i*m)+j) == unique.end()){
                sum+=mat[i][j];
            } 
        }
        return sum;
    }
};