class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int M = mat.size(),N = mat[0].size();
        vector<vector<int>> res(M, vector<int> (N,M*N));
        
        for(int i = 0; i<M ; i++){
            for(int j = 0 ; j<N; j++){
                traverse(mat,res,i,j,-1);
                traverse(mat,res,i,j,1);
            }
        }
        for(int i = M-1; i>=0 ; i--){
            for(int j = N-1 ; j>=0; j--){
                traverse(mat,res,i,j,1);
            }
        }
        return res;
    }
    
    void traverse(vector<vector<int>>& mat,vector<vector<int>>& res,int sr,int sc,int flag){
        
        if(mat[sr][sc] == 0){
            res[sr][sc] = 0;
        }else{
            int count = 1;
            if((sr+flag)>= 0 && (sr+flag)<mat.size()){
                count =1;
                count += res[sr+flag][sc];
                res[sr][sc] = count<res[sr][sc]?count:res[sr][sc];
            }
            if((sc+flag)>= 0 && (sc+flag)<mat[0].size()){
                count = 1;
                count += res[sr][sc+flag];
                res[sr][sc] = count<res[sr][sc]?count:res[sr][sc];
            } 
        }
    }
};