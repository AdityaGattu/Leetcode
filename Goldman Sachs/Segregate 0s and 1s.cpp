#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    int l=0;int r=n-1;
	    while(l<r)
	    {
	        while(v[l]==0 && l<r)

		{
	            l++;
	        }
	        while(v[r]==1 && l<r)
	        {
	            r--;
	        }
	        if(l<r)
	        {
	            v[l]=0;
	            v[r]=1;
	            l++;
	            r--;
	        }
	    }
	     for(int i=0;i<n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    
	    cout<<"\n";
	    
	    
	}
	return 0;
}
************************************************
#include <iostream>
using namespace std;


int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if(x==1){cnt++;}
	    }
	    for(int i=0;i<n-cnt;i++)
	    {
	        cout<<0<<" ";
	    }
	    for(int i=n-cnt;i<n-1;i++)
	    {
	        cout<<1<<" ";
	    }
	    cout<<1<<"\n";
	    
	    
	}
	return 0;
}
