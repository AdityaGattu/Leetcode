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
	    vector<int>a;
	    vector<int>d;
	    
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        d.push_back(x);
	    }
	    sort(a.begin(),a.end());
	    sort(d.begin(),d.end());
	    
	    int cnt=0;;
	    int i=0;
	    int j=0;
	    int stations=0;
	    while(i<a.size() && j<a.size())
	    {
	        if(a[i]<=d[j])
	        {
	            cnt++;
	            i++;
	        }
	        else if(a[i]>d[j])
	        {
	            cnt--;
	            j++;
	        }
	        stations=max(stations,cnt);
	        
	    }
	     cout<<stations<<"\n";
	    
	   
	}
	return 0;
}
