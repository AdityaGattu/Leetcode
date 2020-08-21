#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    map<char,int>m;
	    
	    for(char c:s)
	    {
	        m[c]++;
	    }
	    int f=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(m[s[i]]>1){f=1;cout<<s[i]<<"\n";break;}
	    }
	    if(f==0){cout<<"-1"<<"\n";}
	}
	return 0;
}
