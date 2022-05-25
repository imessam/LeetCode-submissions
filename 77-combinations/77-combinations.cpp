class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        int levelNo = 0,back = 0;
        if (n<=1){
                return {{1}};
            }
        vector<vector<int>> level;
        for(int i = 1;i<=n;i++){
            level.push_back({i});
        }
        levelNo++;
        vector<int>l;
        int i =0;
        while(levelNo != k){
            int s = level.size();
            for( ;i<s;i++){
                l = level[i];
                back = l.back();
                for(int j = back+1;j<=n;j++){
                        l.push_back(j);
                        level.push_back(l);
                        l = level[i];
                }
            }
            levelNo++;
        }
        vector<vector<int>> res (level.begin()+i,level.end());
        return res;        
    }
};