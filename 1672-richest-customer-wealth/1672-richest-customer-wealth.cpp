class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size(),n = accounts[0].size(),maxm = -1,temp = 0;
        
        for(int i = 0;i<m;i++){
            temp = 0;
            for(int j = 0;j<n;j++){
                temp += accounts[i][j];
            }
            if(temp>maxm)
                maxm = temp;
        }
        return maxm;
    }
};