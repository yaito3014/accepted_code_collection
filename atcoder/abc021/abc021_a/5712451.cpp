// URL: https://atcoder.jp/contests/abc021/submissions/5712451
// Date: Fri, 31 May 2019 10:04:41 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int N;
	std::cin >> N;
	int count = 0;
	for(int i=0;i<4;++i)if((N>>i)&1)++count;
	std::cout << count << "
";
	for(int i=0;i<4;++i)if((N>>i)&1)
		std::cout<<(1<<i)<<"
";
}
