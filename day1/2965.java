class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int tv=0,mv=0,sum=0;
        HashMap<Integer,Integer> mpp=new HashMap<>();
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if( mpp.containsKey(grid[i][j]) ) tv=grid[i][j];
                else {mpp.put(grid[i][j],1);sum=sum+grid[i][j];}
            }
        }
        int n=grid.length;
        int k=((n*n)*((n*n)+1))/2;
        mv=k-sum;
        return new int[]{tv,mv};
    }
}
//tc n*n
//sc n--> for hasmap
