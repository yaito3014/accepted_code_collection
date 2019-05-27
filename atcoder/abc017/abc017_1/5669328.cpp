// URL: https://atcoder.jp/contests/abc017/submissions/5669328
// Date: Mon, 27 May 2019 22:37:35 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE


int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int ans=0;
	for(int i=0;i<3;++i){
		int s,e;
		std::cin >> s >> e;
		ans += s*e/10;
	}
	std::cout<<ans<<std::endl;
}
