//https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
class Solution {
public:
    int maxLength(vector<string>& arr) {
        
        int result=findlength(arr);
        return result;
    }
    
    int findlength(vector<string>& arr,string s="",int index=0)
    {
        
        set<char>s1;
        
        for(int i=0;i<s.size();i++)
        {
            s1.insert(s[i]);
        }
        
        if(s1.size()!=s.size())
        {
            return 0;
        }
        int max_len=s1.size();
            
        for(int i=index;i<arr.size();i++)
        {
            max_len=max(max_len,findlength(arr,s+arr[i],i+1));
        }
        return max_len;
    }
};
