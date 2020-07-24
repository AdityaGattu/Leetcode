class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>v;
        if(nums.size()<=2){return {};}
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int x=nums[i];
            
           if(i==0 || (i>0 && nums[i]!=nums[i-1]) ){
            int needed=0-x;
                
            int low=i+1;
            int high=nums.size()-1;
            while(low<high)
            {
                int sum=nums[low]+nums[high];
                
                if(sum==needed)
                {
                    vector<int>v1;
                    v1.push_back(x);
                    v1.push_back(nums[low]);
                    v1.push_back(nums[high]);
                    v.push_back(v1);
                    
                    while(low<high && nums[low]==nums[low+1]){low++;}
                    while(low<high && nums[high]==nums[high-1]){high--;}
                    low++;
                    high--;
                    
                }
                
                else if(sum>needed)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            }
            
        }
            
        }
        return v;
        
    }
};
