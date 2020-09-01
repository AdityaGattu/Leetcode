#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool check(vector<int>& v,int k)
{
    for(int i=0;i<26;i++)
    {
        if(v[i]>0 && v[i]!=k)
        {
            return false;
        }
       
    }
    return true;
    
}

void subs(string s,int k)
{
   int ans=0;
   for (int i = 0; i<s.length(); i++) { 
  
        vector<int>v(26,0);
        
        for (int j = i; j<s.length(); j++) { 
            
          int index = s[j] - 'a'; 
            v[index]++; 
  
            if (v[index] > k) 
                break; 
   
            else if (v[index] == k &&  
                  check(v, k) == true) 
                ans++;
        }
    }
    cout<<ans;
}

int main()
{
   string s="aabbcc";
   int k=2;
   
   subs(s,k);
   
   return 0;
}
