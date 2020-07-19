class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       
        
        for(int i=0;i<prices.size();i++)
        {
         for(int j=i+1;j<prices.size();j++)
         {
             if(prices[i]>=prices[j])
             {
                  prices[i]-=prices[j];break;
             }
         }
            
        }
        
        return prices;
    }
};

...................................................

O(n) solution :

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       
        vector<int>ans(prices.size());
            
            stack<int>s;
        
        for(int i=prices.size()-1;i>=0;--i)
        {
            while(!s.empty() && prices[i]<s.top()){s.pop();}
                
            if(s.empty())
            {
                ans[i]=prices[i];
            }
            else
            {
                ans[i]=prices[i]-s.top();
            }
            s.push(prices[i]);
        }
        
        return ans;
    }
};
