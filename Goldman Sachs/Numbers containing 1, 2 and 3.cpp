#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{
    if(x==0){return false;}
    while(x)
    {
        int z=x%10;
        if( z==1 || z==2 || z==3 )
        {x=x/10;continue;}
        
        return false;
        
    }
    return true;
}
int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    vector<int>v1;
	    int x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	        if(check(x))
	        {
	            v1.push_back(x);
	        }
	    }
	 sort(v1.begin(),v1.end());
	for(int i=0;i<v1.size();i++)
	{
	    cout<<v1[i]<<" ";
	}
	if(v1.size()==0){cout<<"-1";}
	cout<<"\n";
	}
	

	return 0;
}
