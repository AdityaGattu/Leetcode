class Solution {
public:
    int consecutiveNumbersSum(int N) {
        
        // a,a+1,a+2,.....a+n-1;
        // sum = N = n/2( 2*a + (n-1)*d ) here d=1;
        // N/n =  a + n/2 -1/2 ;
        // a = N/n - n/2 +1/2 ;
        
        int count=0;
        double t;
        double n=2;
        
        while( N/n -n/2 + 1/2 > 0) // N/n - n/2 +1/2 >0 since a>0 always;
        {
           
            t = (N/n) - (n/2) + 0.5;
                       
            if(t-int(t)==0)
            {
                count++;
            }
            n++;
        }
        return count+1;
        
    }
};
