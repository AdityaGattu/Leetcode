https://leetcode.com/discuss/interview-question/525977/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int A[]={3,8,2,3,3,2};
    
    map<int,int>m;
    
    for(int i=0;i<6;i++)
    {
        m[A[i]]++;
    }
    
    int val=-1;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->first==itr->second)
        {
            val=max(val,itr->second);
        }
    }
    cout<<val<<"\n";
    return 0;
}
