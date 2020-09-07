https://leetcode.com/discuss/interview-question/364760/
********************************************************
int solution(vector<int>&A, vector<int>&B,int N){
	vector<int> mymap(N+1,0);
	for(int i = 0 ; i < A.size() ; i++){
		mymap[A[i]]++;
		mymap[B[i]]++;
	}
	int res = INT_MIN;
	for(int i = 0 ; i < A.size() ; i++)
		res = max(res,mymap[A[i]]+mymap[B[i]]-1);
	return res;
}

***********************************************************
int solution(vector<int>&A, vector<int>&B,int N){
	vector<vector<int>> mymap(N+1,vector<int>());
	for(int i = 0 ; i < A.size() ; i++){
		mymap[A[i]].push_back(B[i]);
		mymap[B[i]].push_back(A[i]);
	}
	int res = INT_MIN;
	for(int i = 0 ; i < A.size() ; i++)
		res = max(res,mymap[A[i]].size()+mymap[B[i]].size()-1);
	return res;
}
