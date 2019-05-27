// URL: https://atcoder.jp/contests/abc016/submissions/5669150
// Date: Mon, 27 May 2019 21:29:19 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE


int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int A,B,C;
	std::cin >> A >> B >> C;
	std::cout << ((A+B==C&&A-B==C)?"?":(A+B==C)?"+":(A-B==C)?"-":"!") << "
";
	
		
}
