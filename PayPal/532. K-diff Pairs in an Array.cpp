class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int count=0;
        
            
       
            for(auto itr:m)
            {
                
                if( (k==0 && itr.second>1) ||  (k>0 && m.count(itr.first+k)) ) // m.count returns true if element is present in map.
                {
                    count++;
                }
            }
        
               
        return count;
        
    }
};
