class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map< int,pair<int,int> >m;
        vector<int>v;
        
        int n=nums.size();
        int k;
        for(int i=0;i<n;i++)
        {
            k=m[nums[i]].second+1;
            m[nums[i]] ={i,k} ;
        }
        
        for(int i=0;i<n;i++)
        {
            m[nums[i]].second--;
            if(m[target-nums[i]].second!=0)
            {
                
                v.push_back(i);
                v.push_back(m[target-nums[i]].first);
            }
        }
        
        return v;
    }
};
