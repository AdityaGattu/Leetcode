class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        
        vector<bool>v(rooms.size(),0);
        v[0]=1;
        stack<vector<int>>s;
        
        s.push(rooms[0]);
        
        while(!s.empty())
        {
              vector<int>v1;
              v1=s.top();
              s.pop();
            
              for(int room:v1)
              {
                  if(v[room]==0){s.push(rooms[room]);}
                  v[room]=1;
              }
        }
        
        for(bool e:v)
        {
            if(e==0)
            {
                return false;
            }
        }
        return true;
    }
};
