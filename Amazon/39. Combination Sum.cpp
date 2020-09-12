class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
        
        vector<int>local;
        findcomb(candidates,0,target,local,res);
        
        return res;
    }
    
    void findcomb(vector<int>& candidates,int ind,int target,vector<int>& local,vector<vector<int>>& res)
    {
        if(target==0)
        {
            res.push_back(local);
            return;
        }
        if(target<0)
        {
            return ;
        }
        for(int i=ind;i<candidates.size();i++)
        {
            if(i==ind || candidates[i]!=candidates[i-1])
            {
                local.push_back(candidates[i]);
                findcomb(candidates,i,target-candidates[i],local,res);
                local.pop_back();
            }
        }
        
    }
};
