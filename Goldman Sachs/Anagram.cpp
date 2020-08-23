#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	vector<int>m(26,0);
	string s;
	cin>>s;
	string s1;
	cin>>s1;
	for(int i=0;i<s.length();i++)
	{
	    m[s[i]-'a']++;
	}
	for(int i=0;i<s1.length();i++)
	{
	    m[s1[i]-'a']--;
	}
	int f=0;
	for(int i=0;i<26;i++)
	{
	    if(m[i]!=0)
	    {
	        f=1;
	        cout<<"NO\n";break;
	    }
	    
	}
	if(f==0){cout<<"YES\n";}
	
	}
	return 0;
}
