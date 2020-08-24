#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	set<long long>s;
	vector<long long>v;
	s.insert(1);
	auto itr=s.begin();
	
	while(v.size()<10001)
	{
	    long long x=*itr;
	    v.push_back(x);
	    s.insert(x*2);
	    s.insert(x*3);
	    s.insert(x*5);
	    itr++;
	}
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<v[n-1]<<"\n";
	    
	    
	}
	return 0;
}
