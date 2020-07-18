class Solution {
public:
    string longestPalindrome(string s) {
        
        
        
        if(s=="" || s.length()<1){return "";}
        int start=0,end=0;
        for(int i=0;i<s.length();i++)
        {
            
            int len1=expand_from_center(s,i,i);
            int len2=expand_from_center(s,i,i+1);
            int len=max(len1,len2);
            if(len>end-start)
            {
                start = i-(len-1)/2;
                end = i+(len/2);
            }
        }
        cout<<start<<end;
        string t= s.substr(start,end-start+1);
        return t;
        
    }
    
    int expand_from_center(string s,int left,int right)
    {
        while(left>=0 && right<s.length() && s[left]==s[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
};
