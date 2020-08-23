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
