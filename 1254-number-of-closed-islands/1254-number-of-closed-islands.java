class Solution {
    public int closedIsland(int[][] grid) {
        int [][] visited = new int[grid.length][grid[0].length];
        int M = grid.length,N = grid[0].length,count = 0;
        for(int i = 0;i<M;i++)
            for(int j = 0;j<N;j++){
                if(grid[i][j] == 0 && visited[i][j] == 0){
                    if(isClosed(grid,visited,i,j)){
                        count++;
                    }
                }
            }
        return count;
    }
    
    public boolean isClosed(int [][] grid,int [][] visited,int sr,int sc){
        
        if(grid[sr][sc] == 1)
            return true;
        
        if(visited[sr][sc] >0)
            return visited[sr][sc]==2?true:false;
        
        
        boolean closed = true;         
        visited[sr][sc] = -1;
        
        if((sr-1)<0 || (sc-1)<0 || (sr+1)>=grid.length || (sc+1)>=grid[0].length){
            visited[sr][sc] = 1;
            return false;
        }
        if((sr-1)>= 0 && visited[sr-1][sc] != -1)
            closed = isClosed(grid,visited,sr-1,sc);
        if(closed && (sc-1)>= 0 && visited[sr][sc-1] != -1)
            closed = isClosed(grid,visited,sr,sc-1);
        if(closed && (sr+1)<grid.length && visited[sr+1][sc] != -1)
            closed = isClosed(grid,visited,sr+1,sc);
        if(closed && (sc+1)<grid[0].length && visited[sr][sc+1] != -1)
            closed = isClosed(grid,visited,sr,sc+1);
        
        visited[sr][sc] = closed?2:1;

        return closed;
    }
}