class Solution {
    public int numIslands(char[][] grid) {
        char [][] visited = new char[grid.length][grid[0].length];
        return traverse(grid,visited);
    }
    
    public int traverse(char [][] grid, char [][] visited){
        int count = 0;
        
        for(int i = 0 ; i<grid.length;i++){
            for(int j = 0; j<grid[0].length; j++){
                if(grid[i][j] == '1'){
                    count += markLands(grid,visited,i,j);
                }
            }
        }
        return count;
    }
    public int markLands(char [][] grid,char [][] visited,int sr,int sc){
        if(visited[sr][sc] == '1'){
            return 0;
        }
        visited[sr][sc] = '1';
        
        if((sr-1)>=0 && grid[sr-1][sc] == '1'){
            markLands(grid,visited,sr-1,sc);
        }
        if((sc-1)>=0 && grid[sr][sc-1] == '1'){
            markLands(grid,visited,sr,sc-1);
        }
        if((sr+1)<grid.length && grid[sr+1][sc] == '1'){
            markLands(grid,visited,sr+1,sc);
        }
        if((sc+1)<grid[0].length && grid[sr][sc+1] == '1'){
            markLands(grid,visited,sr,sc+1);
        }
      return 1;
    }
}