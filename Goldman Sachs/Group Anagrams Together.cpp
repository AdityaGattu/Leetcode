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
	    map<string,int>m;
	    for(int i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        sort(s.begin(),s.end());
	        m[s]++;
	    }
	    vector<int>v;
	    for(auto itr:m)
	    {
	        v.push_back(itr.second);
	    }
	    sort(v.begin(),v.end());
	    
	    for(int ele:v)
	    {
	        cout<<ele<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
