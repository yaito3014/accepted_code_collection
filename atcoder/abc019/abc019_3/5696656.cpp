// URL: https://atcoder.jp/contests/abc019/submissions/5696656
// Date: Wed, 29 May 2019 22:20:22 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int N;
	std::cin>>N;
	std::set<int> s;
	for(int i=0;i<N;++i){
		int a;
		std::cin >> a;
		while(!(a&1))a>>=1;
		s.insert(a);
	}
	std::cout<<s.size()<<std::endl;
}
