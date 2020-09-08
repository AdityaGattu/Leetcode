//https://leetcode.com/discuss/interview-question/414660/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s="WRWWWR"; //s="WWRWWWRWR"
    
    int redcnt=0;
    int startind;
    int lastind;
    int f=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R' && f==0)
        {
            f=1;
            startind=i;
        }
        if(s[i]=='R' && f==1)
        {
            redcnt++;
            lastind=i;
        }
    }
    
    if(redcnt==0)
    {
        cout<<0<<"\n";
    }
    
    else
    {
        cout<<lastind-startind-redcnt+1<<"\n";
    }
    return 0;
}
