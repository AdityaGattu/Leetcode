#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	while(true)
	{
	    string s;
	    cin>>s;
	    if(s=="0")
	    {
	        break;
	    }
	    
	    int start=0;
	    int end=s.length()-1;
	    
	    int flag=0;
	    int swaps=0;
	    while(start<end)
	    {
	        int curr_last=end;
	        
	        while(curr_last>start && s[curr_last]!=s[start])
	        {
	            curr_last--;
	        }
	        
	        if(curr_last==start)
	        {
	            flag=1;
	            break;
	        }
	        
	        for(int i=curr_last+1;i<=end;i++)
	        {
	            swap(s[i-1],s[i]);
	            swaps++;
	        }
	        start++;
	        end--;
	    }
	    
	    if(flag==0)
	    {
	        cout<<swaps<<"\n";
	    }
	    if(flag==1)
	    {
	        cout<<"Impossible\n";
	    }
	}
	return 0;
}
