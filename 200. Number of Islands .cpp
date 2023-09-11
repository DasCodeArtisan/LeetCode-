class Solution {
public:
    void Dfs(vector<vector<char>>&grid,int i,int j){
        if(i<0 || i==grid.size() || j<0 || j==grid[0].size() || grid[i][j]=='0')
        return;
        grid[i][j]='0';
        Dfs(grid,i-1,j);
        Dfs(grid,i+1,j);
        Dfs(grid,i,j-1);
        Dfs(grid,i,j+1);
    }


    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size(),island=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1')
                island++;
                Dfs(grid,i,j);
            }
        }
        return island;
    }
};