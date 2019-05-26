// URL: https://atcoder.jp/contests/abc014/submissions/5657142
// Date: Sun, 26 May 2019 22:24:15 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int a,b;
	std::cin >> a >> b;
	std::cout << (a%b?(b-a%b):0) << std::endl;	
}
