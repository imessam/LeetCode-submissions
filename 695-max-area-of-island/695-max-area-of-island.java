class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int [][] visited = new int[grid.length][grid[0].length];
        return traverse(grid,visited);
    }
    
    public int traverse(int [][] grid, int [][] visited){
        int max = 0,count = 0;
        
        for(int i = 0 ; i<grid.length;i++){
            for(int j = 0; j<grid[0].length; j++){
                if(grid[i][j] == 1){
                    count = countLands(grid,visited,i,j);
                    if(count>max){
                        max = count;
                    }
                }
            }
        }
        return max;
    }
    public int countLands(int [][] grid,int [][] visited,int sr,int sc){
        if(visited[sr][sc] == 1){
            return 0;
        }
        int count = 1;
        visited[sr][sc] = 1;
        
        if((sr-1)>=0 && grid[sr-1][sc] == 1){
            count += countLands(grid,visited,sr-1,sc);
        }
        if((sc-1)>=0 && grid[sr][sc-1] == 1){
            count += countLands(grid,visited,sr,sc-1);
        }
        if((sr+1)<grid.length && grid[sr+1][sc] == 1){
            count += countLands(grid,visited,sr+1,sc);
        }
        if((sc+1)<grid[0].length && grid[sr][sc+1] == 1){
            count += countLands(grid,visited,sr,sc+1);
        }
      return count;
    }
}