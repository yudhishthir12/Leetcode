class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0] || grid[n-1][n-1]){
            return -1;
        }
        vector<vector<int>> visited(n,vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;
        visited[0][0]=1;
        q.push({{0,0},1});
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            int delrow[]={-1,-1,-1,0,0,1,1,1};
            int delcol[]={-1,0,1,-1,1,-1,0,1};
            if(row==n-1 && col==n-1){
                    return dis;
            }
            for(int i =0;i<8;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                
                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<n &&
                    grid[nrow][ncol]==0 && !visited[nrow][ncol]){
                        visited[nrow][ncol]=1;
                        q.push({{nrow,ncol},dis+1});
                        

                 }
            }
            
        }
        return -1;
        

    }
};