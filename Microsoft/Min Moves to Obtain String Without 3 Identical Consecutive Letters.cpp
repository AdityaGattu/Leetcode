#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s="baaaaaaaaaab";
    
    int swaps=0;
    
    for(int i=0;i<s.length();)
    {
        int nextpos=i+1;
        
        while( nextpos<s.length() && s[i]==s[nextpos] )
        {
            nextpos++;
        }
        
        swaps+=(nextpos-i)/3;
        
        i=nextpos;
    }
    cout<<swaps;

    return 0;
}
