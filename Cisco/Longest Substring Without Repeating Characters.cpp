class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
     if(s.length()==0){return 0;}
        
     int ans=1;
        
     vector<int>v(300,0);
        
     int i=0;
     int j=0;
     v[s[i]]++;
        
     while(j!=s.length()-1)
     {
        if(v[s[j+1]]==0)
        {
            v[s[j+1]]++;
            j++;
            ans=max(ans,j-i+1);
        }
         else
         {
             v[s[i]]--;
             i++;
         }
     }
        return ans;
        
    }
};
