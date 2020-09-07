#include <bits/stdc++.h>
using namespace std;

string longest_substring(string s){   //also can be used for Longest Semi-Alternating Substring length 
	(a substring does not contain 3 identical consecutive chars)
    
    int cnt=1;
    int start=0;
    int curr_start;
    int max_length=-99999;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        
        else
        {
            cnt=1;
        }
        
        if(cnt<=2)
        {
            if(i-start+1 > max_length)
            {
                max_length=i-start+1;
                curr_start=start;
            }
        }
        else
        {
            start=i-1;
            cnt=2;
        }
        
    }
   return s.substr(curr_start,max_length);
}
int main() {
	string result = longest_substring("aabbaaaaabb");
	cout<<result<<endl;
	return 0;
}
