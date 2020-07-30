string Solution::solve(string A) {
    
    int n=A.length();
    vector<string>v;
    string temp,ans="";
    for(int i=0;i<n;i++)
    {
        if(A[i]==' '&& A[i+1]!=' ')
        {
            if(temp!="")v.push_back(temp);
            temp="";
        }
        else if(A[i]==' ' && A[i+1]==' '){continue;}
        else
        {
            temp+=A[i];
        }
    }
    if(temp!="")v.push_back(temp);
    for(int i=v.size()-1;i>0;i--)
    {
        ans+=v[i]+" ";
        
    }
    
    ans+=v[0];

    return ans;
    
}
