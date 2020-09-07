#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s="abczd";
    int curr;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]>s[i+1])
        {
            curr=i;
            break;
        }
    }
    cout<<s.substr(0,curr)+s.substr(curr+1);

    return 0;
}
