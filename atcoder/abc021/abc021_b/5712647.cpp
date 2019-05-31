// URL: https://atcoder.jp/contests/abc021/submissions/5712647
// Date: Fri, 31 May 2019 10:25:07 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int N;
	std::cin >> N;
	std::set<int> s;
	int a,b;
	std::cin >> a >> b;
	s.insert(a);
	s.insert(b);
	int K;
	std::cin >> K;
	bool ans = true;
	for(int i=0;i<K;++i){
		int P;
		std::cin >> P;
		if(s.find(P)!=s.end())ans = false;
		s.insert(P);
	}
	std::cout<<(ans?"YES":"NO")<<"\n";
	
}
