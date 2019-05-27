// URL: https://atcoder.jp/contests/abc016/submissions/5669204
// Date: Mon, 27 May 2019 21:52:07 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE


int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int N,M;
	std::cin >> N >> M;
	std::vector<std::vector<int>> nodes(N);
	for(int i=0;i<M;++i){
		int A,B;
		std::cin >> A >> B;
		nodes[A-1].push_back(B-1);
		nodes[B-1].push_back(A-1);
	}
	for(int i=0;i<N;++i){
		std::set<int> s;
		for(auto&v:nodes[i]){
			for(auto&w:nodes[v]){
				s.insert(w);
			}
		}
		s.erase(i);
		for(auto&v:nodes[i])s.erase(v);
		std::cout << s.size() << "
";
	}	
	
}
