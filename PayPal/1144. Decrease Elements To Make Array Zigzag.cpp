class Solution {
public:
    int movesToMakeZigzag(vector<int>& a) {
        
        
        int cnt1=0,cnt2=0;
        int x,y;
        for(int i=0;i<a.size();i+=2)
        {
            x=a[i];
            if(i-1>=0){ x=min(x,a[i-1]-1);}
            if(i+1<a.size()){ x=min(x,a[i+1]-1);}
            cnt1+=a[i]-x;
        }
        
        
        for(int i=1;i<a.size();i+=2)
        {
            y=a[i];
            if(i-1>=0){ y=min(y,a[i-1]-1);}
            if(i+1<a.size()){ y=min(y,a[i+1]-1);}
            cnt2+=a[i]-y;
        }
        
        return min(cnt1,cnt2);
    }
};
