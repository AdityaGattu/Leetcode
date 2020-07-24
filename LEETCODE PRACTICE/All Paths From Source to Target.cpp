class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>> res;
        
        queue<vector<int>> q;
        vector<int>v;
        v.push_back(0);
        
        q.push(v);
        
        int goal = graph.size()-1;
        
        while(!q.empty())
        {
            vector<int>v1;
            v1=q.front();
            q.pop();
            
            int lastnode = v1[v1.size()-1];
            
            if(lastnode==goal)
            { 
                res.push_back(v1);
            }
            else
            {
                vector<int>p;
                p=graph[lastnode];
                
                for(int ele : p)
                {
                    vector<int>newpath = v1;
                    newpath.push_back(ele);
                    q.push(newpath);
                }
            }
            
        }
        
        return res;
        
        
    }
};
