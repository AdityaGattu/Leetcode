class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>s;
        
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int k=0;
        for(int x:s)
        {
            nums[k]=x;
            k++;
        }
        return s.size();
        
    }
};
