#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    reverse(s.begin(),s.end());
	    cout<<s<<"\n";
	}
	return 0;
}
