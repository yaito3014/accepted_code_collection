// URL: https://atcoder.jp/contests/abc015/submissions/5665846
// Date: Mon, 27 May 2019 13:33:59 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

using std::vector;

bool dfs(int n, int N, int K, vector<int> vec,const vector<vector<int>>& T){
	if(n==N){
		int r=0;
		for(auto&v:vec)r^=v;
		return !r;
	}
	bool ans = false;
	for(int i=0;i<K;++i){
		vec[n] = T[n][i];
		ans=dfs(n+1,N,K,vec,T);
		if(ans)break;
	}
	return ans;
}

int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int N,K;
	std::cin >> N >> K;
	vector<int> q(N);
	vector<vector<int>> T(N,vector<int>(K));
	for(auto&v:T)for(auto&w:v)std::cin>>w;
	std::cout << (dfs(0,N,K,q,T)?"Found":"Nothing") << std::endl;
}
