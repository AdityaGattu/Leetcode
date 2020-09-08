//https://leetcode.com/problems/bulb-switcher-iii/
class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        
        int cnt=0;
        int runningsum=0;
        int indexsum=0;
        
        for(int i=1;i<=light.size();i++)
        {
           runningsum+=light[i-1];
           indexsum+=i;
           
            if(runningsum==indexsum)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
