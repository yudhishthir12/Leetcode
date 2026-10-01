class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>& grid ,vector<vector<int>>& visited){
        int n=grid.size();
        int m=grid[0].size();
        visited[row][col]=1;
        //up right left down
        int delrow[]={-1,0,0,1};
        int delcol[]={0,1,-1,0};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !visited[nrow][ncol]){
                dfs(nrow,ncol,grid,visited);
            }
        }
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int islands=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    islands++;
                    dfs(i,j,grid,visited);

                 }
            }
        }
        return islands ;
    }
};