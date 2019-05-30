// URL: https://atcoder.jp/contests/abc020/submissions/5706777
// Date: Thu, 30 May 2019 21:43:34 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int A,B;
	std::cin >> A >> B;
	int digit=std::log10(B)+1;
	for(;digit>0;--digit)A*=10;
	std::cout << (A+B)*2 << std::endl;
	
}
