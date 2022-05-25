class Solution {
    public int orangesRotting(int[][] grid) {
        int noFresh = 0,noRotten = 0;
        int M = grid.length,N = grid[0].length;
        
        Queue<Pair<Integer,Integer>> q= new LinkedList<>();
        
        for(int i =0;i<M;i++){
            for(int j = 0; j<N ; j++){
                if(grid[i][j] == 1)
                    noFresh += 1;
                else if(grid[i][j] == 2){
                    noRotten += 1;
                    q.add(new Pair<>(i,j));
                }
            }
        }
        if(noFresh == 0)
            return 0;
        int count = 0,qSize = 0,sr=0,sc=0;
        int[][] arr = { { -1, 0 }, { 0, -1 } ,{1,0},{0,1}};
        boolean isRotten = false;
        
        while(q.size() != 0){
            qSize = q.size();
            if(isRotten){
                count ++;
            }
            isRotten = false;
            for(int i = 0; i<qSize;i++){
                for(int j = 0;j<4;j++){
                    sr = q.peek().getKey()+arr[j][0];
                    sc = q.peek().getValue()+arr[j][1];
                    if(sr>=0 && sr<M && sc>=0 && sc<N && grid[sr][sc] == 1){
                        isRotten = true;
                        grid[sr][sc] = 2;
                        q.add(new Pair<>(sr,sc));
                        noFresh--;
                        noRotten ++;
                    }
                }
                q.remove();
            }
        }
        return noFresh == 0?count:-1;
    }
     
}