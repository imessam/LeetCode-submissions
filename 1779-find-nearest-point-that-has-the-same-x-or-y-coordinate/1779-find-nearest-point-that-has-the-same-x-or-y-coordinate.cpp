class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minIdx = -1,minDist =INT_MAX,dist = INT_MAX;
       
        
        for(int i =0;i<points.size();i++){
            if(points[i][0] == x && points[i][1] == y){
                minIdx = i;
                dist = 0;   
                break;
            }
            else if(points[i][0] == x || points[i][1] == y){
                dist = abs(x-points[i][0])+abs(y-points[i][1]);
                if (dist<minDist){
                    minDist = dist;
                    minIdx = i;
                }
            }
        }
        return minIdx == -1?-1:minIdx;
    }
};