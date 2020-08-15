#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int>v;
	    int x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	       v.push_back(x); 
	    }
	    
	    sort(v.begin(),v.end());
	    int min=v[1]-v[0];
	    for(int i=1;i<n-1;i++)
	    {
	        if(v[i+1]-v[i]<min)
	        {
	            min=v[i+1]-v[i];
	        }
	    }
	    cout<<min<<"\n";
	}
	return 0;
}
