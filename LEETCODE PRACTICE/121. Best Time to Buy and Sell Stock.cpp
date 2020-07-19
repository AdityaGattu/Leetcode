class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int curr_min=99999;
        for(int i=0;i<prices.size();i++)
        {
           curr_min = min(curr_min,prices[i]);
            
            if(prices[i]-curr_min > profit)
            {
                profit=prices[i]-curr_min;
            }
        }
        return profit;
        
    }
};
