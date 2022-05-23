class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows;
        vector<int> row,prev_row;
        for(int i = 0; i<numRows; i++){
            for(int j = 0; j<i+1;j++){
                if(j == 0 || (j+1) == (i+1)){
                    row.push_back(1);
                }else{
                    row.push_back(prev_row[j-1]+prev_row[j]);
                }
            }
            rows.push_back(row);
            prev_row = row;
            row = {};
        }
        return rows;
    }
};