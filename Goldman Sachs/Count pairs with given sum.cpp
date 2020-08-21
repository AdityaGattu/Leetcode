#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    map<int,int>m;
	    int x;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	       m[x]++; 
	    }
	    int cnt=0;
	    for(int i=0;i<v.size();i++)
	    {
	        int need=k-v[i];
	        cnt+=m[need];
	        if(need==v[i])
	        {
	            cnt--;
	        }
	    }
	    cout<<cnt/2<<"\n";
	    
	}
	return 0;
}
