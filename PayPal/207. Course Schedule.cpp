class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>inDegree(numCourses);
        
        for(int i=0;i<prerequisites.size();i++)
        {
            inDegree[prerequisites[i][0]]++;
        }
        
        stack<int>s;
        
        for(int i=0;i<inDegree.size();i++)
        {
            if(inDegree[i]==0)
            {
                s.push(i);
            }
        }
        int cnt=0;
        
        while(!s.empty())
        {
            int curr=s.top();
            s.pop();
            cnt++;
            
            for(int j=0;j<prerequisites.size();j++)
            {
                if(prerequisites[j][1]==curr)
                {
                    inDegree[prerequisites[j][0]]--;
                
                    if(inDegree[prerequisites[j][0]]==0)
                    {
                    s.push(prerequisites[j][0]);
                    }
                }
            }
            
        }
        return  cnt==numCourses;
        
        
    }

};
