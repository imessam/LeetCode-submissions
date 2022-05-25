class Solution {
public:

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size(),levelNo = 0;
        vector<vector<int>> res;
        if (n<=1){
                res.push_back(nums);
                return res;
            }
        queue<vector<int>> level;
        for(int i = 0;i<n;i++){
            vector<int> l;
            l.push_back(nums[i]);
            level.push(l);
        }
        levelNo++;
        vector<int>l;
        while(levelNo != n){
            int s = level.size();
            for(int i = 0;i<s;i++){
                l = level.front();
                set<int> found;
                for(int j = 0;j<l.size();j++){
                    found.insert(l[j]);
                }
                for(int j = 0;j<n;j++){
                    if(found.find(nums[j]) == found.end()){
                        l.push_back(nums[j]);
                        level.push(l);
                        if ((levelNo+1) == n)
                            res.push_back(l);
                        l = level.front();
                    }
                }
                level.pop();
            }
            levelNo++;
        }
        return res;
    }
};