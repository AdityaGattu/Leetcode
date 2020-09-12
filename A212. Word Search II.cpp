class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
        vector<string>v;
        for(int i=0;i<words.size();i++)
        {
            string s=words[i];
            if(find(board,s))
            {
                v.push_back(s);
            }
        }
        
        return v;
        
    }
    
    
    bool find(vector<vector<char>>& board,string s)
    {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==s[0] && comp(board,i,j,0,s) )
                {
                    return true;
                }
            }
        }
        return false;
        
    }
    
    bool comp(vector<vector<char>>& board,int i,int j,int cnt,string s)
    {
        if(cnt==s.length())
        {
            return true;
        }
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=s[cnt])
        {
            return false;
        }
        
        char temp=board[i][j];
        board[i][j]=' ';
        
        bool found=comp(board,i+1,j,cnt+1,s) ||
                   comp(board,i-1,j,cnt+1,s) ||
                   comp(board,i,j+1,cnt+1,s) ||
                   comp(board,i,j-1,cnt+1,s);
         
         board[i][j]=temp;
         return found;
         
    }
    
    
};
