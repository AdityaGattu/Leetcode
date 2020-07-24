class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char,int>m1;
        
        if(s.length()!=t.length()){return false;}
        
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
        }
        
        
        for(int i=0;i<t.length();i++)
        {
            if(m1[t[i]]==0)
            {
                return false;
            }
            
            if(m1[t[i]]>0)
            {
                m1[t[i]]--;
            }
            
        }
        
        return true;
        
    }
};
