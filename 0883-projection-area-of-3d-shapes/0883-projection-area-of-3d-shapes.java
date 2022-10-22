class Solution {
    public int projectionArea(int[][] grid) {
        //if(grid.length == 1){return 1+2*grid[0][0];}
        int n = grid.length;
        int res = 0;
        int max1 = 0,max2=0;
        for(int i=0;i<n;i++){
            max1 = 0;
            max2=0;
            for(int j=0;j<n;j++){
                max1=Math.max(max1,grid[j][i]);
                max2=Math.max(max2,grid[i][j]);
                if(grid[i][j]!=0){res++;}
            }
            res+=max1+max2;
        }
        return res;
    }
}