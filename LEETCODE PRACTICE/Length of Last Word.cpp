class Solution {
public:
    int lengthOfLastWord(string s) {       
     
        stringstream ss(s);
        
        string ele;
        
        int l=0;
        while(ss>>ele)
        {
            l=ele.length();
        }
        return l;
        
    }
};
