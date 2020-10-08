class Solution {
public:
    
    
        
    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        
        if(digits=="")
        {
            return {};
        }
        
        map<string,string>m;
        
        m["2"]="abc";
        m["3"]="def";
        m["4"]="ghi";
        m["5"]="jkl";
        m["6"]="mno";
        m["7"]="pqrs";
        m["8"]="tuv";
        m["9"]="wxyz";

        reccall(ans,digits,"",0,m);
        return ans;
        
    }
    
    void reccall(vector<string>& ans,string digits,string curr,int index,map<string,string> &m)
    {
        
        if(index==digits.length())
        {
            ans.push_back(curr);
            return;
        }
        string y(1,digits[index]); //to convert 1 char to string
        string letters=m[y];
        
        for(int i=0;i<letters.length();i++)
        {
            reccall(ans,digits,curr+letters[i],index+1,m);
        }
    }
};
