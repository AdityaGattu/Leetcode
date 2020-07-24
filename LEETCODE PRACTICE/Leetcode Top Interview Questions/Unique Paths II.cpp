class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        if(obstacleGrid.size()==0){return 0;}
        
        int m=obstacleGrid.size()-1;
        int n=obstacleGrid[0].size()-1;
        
        if(obstacleGrid[m][n]==1 || obstacleGrid[0][0]==1){return 0;}
        
        for(int i=0;i<obstacleGrid.size();i++)
        {
            for(int j=0;j<obstacleGrid[0].size();j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    obstacleGrid[i][j]=-1;
                }
            }
        }
        
        
                                    
        for(int i=0;i<obstacleGrid.size();i++)
        {
            if(obstacleGrid[i][0]==-1){break;}
           obstacleGrid[i][0]=1;
        }
                                    
        for(int i=0;i<obstacleGrid[0].size();i++)
        {
            if(obstacleGrid[0][i]==-1){break;}
            obstacleGrid[0][i]=1;
        }
        
      
        
        
       
        for(int i=1;i<obstacleGrid.size();i++)
        {
            for(int j=1;j<obstacleGrid[0].size();j++)
            {
                if(obstacleGrid[i][j]!=-1){
                if(obstacleGrid[i-1][j]==-1 && obstacleGrid[i][j-1]!=-1)
                {
                 obstacleGrid[i][j] = obstacleGrid[i][j-1];    
                }
                
                else if(obstacleGrid[i][j-1]==-1 && obstacleGrid[i-1][j]!=-1)
                {
                    obstacleGrid[i][j] = obstacleGrid[i-1][j]; 
                }
                 else if(obstacleGrid[i][j-1]==-1 && obstacleGrid[i-1][j]==-1 )
                {
                    obstacleGrid[i][j] = 0; 
                }
                else{
                obstacleGrid[i][j] = obstacleGrid[i-1][j]+obstacleGrid[i][j-1];
                }
                }
            }
        }
                                    
        return obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};
