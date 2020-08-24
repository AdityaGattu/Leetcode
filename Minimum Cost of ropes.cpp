#include <iostream>
#include<bits/stdc++.h>
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
	    priority_queue<int,vector<int>,greater<int>>pq;
	    int x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        pq.push(x);
	    }
	    long long sum=0;int m;
	    while(!pq.empty())
	    {
	        int t=pq.top();
	        pq.pop();
	        int s=0;
	        if(!pq.empty())
	        {s=pq.top();
	        pq.pop();}
	        m=t+s;
	        sum+=m;
	        if(!pq.empty()){pq.push(m);}
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
