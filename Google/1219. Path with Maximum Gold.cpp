class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        
        
        
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
            
        int maxvalue,cellvalue;
            
        if(grid.size()==0){ return 0;}
        
        
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cellvalue=findmax(grid,i,j,m,n,visited);
                maxvalue=max(maxvalue,cellvalue);
            }
        }
        return maxvalue;
    }
    
     
    int findmax(vector<vector<int>>& grid,int i,int j,int m,int n,vector<vector<int>> &visited)
    {
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || visited[i][j]){ return 0;}
        
        visited[i][j]=1;
        
        int left = findmax(grid,i-1,j,m,n,visited);
        
        int right = findmax(grid,i+1,j,m,n,visited);
        
        int up = findmax(grid,i,j-1,m,n,visited);
        
        int down = findmax(grid,i,j+1,m,n,visited);
        
        visited[i][j]=0;
        
        return max(left,max(right,max(up,down)))+grid[i][j];
    }
};
