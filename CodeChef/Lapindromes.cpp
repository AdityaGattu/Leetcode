#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    
	    cin>>s;
	    
	    int n=s.length();
	    int f=0;
	    if(n%2==0)
	    {
	        vector<int>m1(26,0);
	        
	        for(int i=0;i<n/2;i++)
	        {
	            m1[s[i]-'a']++;
	        }
	        for(int i=n/2;i<n;i++)
	        {
	            if(m1[s[i]-'a']>0)
	            {m1[s[i]-'a']--;}
	            else
	            {f=1;cout<<"NO"<<"\n";break;}
	        }
	        
	    }
	    
	    if(n%2==1)
	    {
	        vector<int>m2(26,0);
	        
	        for(int i=0;i<n/2;i++)
	        {
	            m2[s[i]-'a']++;
	        }
	        for(int i=n/2+1;i<n;i++)
	        {
	            if(m2[s[i]-'a']>0)
	            {m2[s[i]-'a']--;}
	            else
	            {f=1;cout<<"NO"<<"\n";break;}
	        }
	        
	    }
	    if(f==0){cout<<"YES"<<"\n";}
	}
	return 0;
}
