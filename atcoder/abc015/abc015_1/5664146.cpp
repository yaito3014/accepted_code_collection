// URL: https://atcoder.jp/contests/abc015/submissions/5664146
// Date: Mon, 27 May 2019 11:26:08 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	std::string A,B;
	std::cin >> A >> B;
	std::cout << (A.length()<B.length()?B:A)<<"
";
	
}
