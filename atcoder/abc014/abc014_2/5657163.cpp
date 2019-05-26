// URL: https://atcoder.jp/contests/abc014/submissions/5657163
// Date: Sun, 26 May 2019 22:34:37 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int n, X;
	std::cin >> n >> X;
	int ans = 0;
	for(int i = 0;i < n;++i){
		int a;
		std::cin >> a;
		if(X&(1<<i))ans+=a;
	}
	std::cout << ans << std::endl;
}
