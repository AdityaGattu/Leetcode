class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
     
        vector<vector<int>>res;
        
        vector<int>local;
        findcomb(1,n,local,res,k);
        
        return res;
        

    }
    
     void findcomb(int ind,int target,vector<int>& local,vector<vector<int>>& res,int k)
    {
         if(local.size()==k)
         { 
             if(target==0)
             {
                res.push_back(local);
                return;
              }
         }
         
        if(target<0)
        {
            return;
        }
         
        for(int i=ind;i<=9;i++)
        {
                local.push_back(i);
                findcomb(i+1,target-i,local,res,k);
                local.pop_back();
        }
     }     
};
    
