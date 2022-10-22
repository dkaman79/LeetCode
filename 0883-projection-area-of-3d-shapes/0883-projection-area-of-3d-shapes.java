class Solution {
    public int projectionArea(int[][] grid) {
        if(grid.length == 1){return 1+2*grid[0][0];}
        int n = grid.length;
        int res = 0;
        int max = 0;
        for(int i=0;i<n;i++){
            max = 0;
            for(int e : grid[i]){
                max = Math.max(max,e);
                if(e!=0){res++;}
            }
            res+=max;
        }
        for(int i=0;i<n;i++){
            max=0;
            for(int j=0;j<n;j++){
                max=Math.max(max,grid[j][i]);
            }
            res+=max;
        }
        return res;
    }
}