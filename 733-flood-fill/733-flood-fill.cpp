class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int origColor = image[sr][sc];
        
        if(origColor == newColor){
            return image;
        }
        
        fill(image,sr,sc,origColor,newColor);
        return image;
    }
    
    void fill(vector<vector<int>>& image, int sr,int sc,int origColor,int newColor){
        
        if(image[sr][sc] != origColor){
            return;
        }
        image[sr][sc] = newColor;
        
        if((sr-1)>=0) {
            fill(image,sr-1,sc,origColor,newColor);
        }
        if((sc-1)>=0) {
            fill(image,sr,sc-1,origColor,newColor);
        }
        if((sr+1)<image.size()) {
            fill(image,sr+1,sc,origColor,newColor);
        }
        if((sc+1)<image[0].size()) {
            fill(image,sr,sc+1,origColor,newColor);
        }
        
    }
};