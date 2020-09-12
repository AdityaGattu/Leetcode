class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        
        vector<int>local;
        findcomb(nums,0,nums.size(),local,res);
        
        return res;
    }
    
    void findcomb(vector<int>& nums,int ind,int size,vector<int>& local,vector<vector<int>>& res)
    {
        
            res.push_back(local);
        
        
        for(int i=ind;i<size;i++)
        {
            if(i==ind || nums[i]!=nums[i-1])
            {
                local.push_back(nums[i]);
                findcomb(nums,i+1,size,local,res);
                local.pop_back();
            }
        }
        
    }
};
