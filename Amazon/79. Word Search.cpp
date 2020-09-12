class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0] && find(board,i,j,0,word))
                {
                    return true;
                }
            }
        }
        return false;
        
    }
    
    bool find(vector<vector<char>>& board,int i,int j,int cnt,string word)
    {
        if(cnt==word.length())
        {
            return true;
        }
        
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[cnt])
        {
            return false;
        }
        
        char temp=board[i][j];
        board[i][j]=' ';
        
        bool found = find(board,i+1,j,cnt+1,word) || 
                     find(board,i-1,j,cnt+1,word) || 
                     find(board,i,j+1,cnt+1,word) || 
                     find(board,i,j-1,cnt+1,word);
            
         board[i][j]=temp;
         return found;
    }
};
