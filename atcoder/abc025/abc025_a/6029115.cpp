// URL: https://atcoder.jp/contests/abc025/submissions/6029115
// Date: Thu, 20 Jun 2019 07:11:11 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	std::string S;
	int N;
	std::cin >> S >> N;
	std::sort(S.begin(),S.end());
	std::cout << S[(N-1)/5] << S[(N-1)%5] << std::endl;
	
}
