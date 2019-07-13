// URL: https://atcoder.jp/contests/abc026/submissions/6356758
// Date: Sat, 13 Jul 2019 05:05:55 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

template<class T>
using vec = std::vector<T>;

int dfs(const vec<vec<int>>& G, int n){
	if(G[n].empty())return 1;
	int m = INT_MAX;
	int M = -1;
	for(auto v:G[n]){
		int num = dfs(G,v);
		m = std::min(m,num);
		M = std::max(M,num);
		
	}
	return m+M+1;
}

int main() {
	
	int N;
	std::cin >> N;
	vec<vec<int>> G(N);
	for(int i=1;i<N;++i){
		int B;
		std::cin >> B;
		G[B-1].push_back(i);
	}
	int ans = dfs(G,0);
	std::cout << ans << std::endl;
	
}
