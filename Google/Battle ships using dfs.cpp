class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        
        int numships=0;
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X')
                {
                numships++;
                sink(board,i,j);
                }
                
            }
        }
        
        return numships;
        
    }
    
    void sink(vector<vector<char>>& board,int i,int j)
    {
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='.'){return;}
        
        board[i][j]='.';
        
        sink(board,i-1,j);
        sink(board,i+1,j);
        sink(board,i,j-1);
        sink(board,i,j+1);
    }
};
