#include<iostream>
using namespace std;

void swap1(char &a,char &b)
{
    char t;
    t=a;
    a=b;
    b=t;
}
void permute(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<"\n";
    }
    
    else{
        for(int i=l;i<=r;i++)
        {
            swap1(s[l],s[i]);
            permute(s,l+1,r);
            swap1(s[l],s[i]);
        }
    }
}
int main()
{
    string str="ABC";
    permute(str,0,2);
}
