// URL: https://atcoder.jp/contests/abc015/submissions/5664198
// Date: Mon, 27 May 2019 11:31:00 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	int N;
	std::cin >> N;
	int count = 0;
	int sum = 0;
	for(int i=0;i<N;++i){
		int A;
		std::cin >> A;
		if(A==0)continue;
		++count;
		sum+=A;
	}
	int ans = std::ceil(1.*sum/count);
	std::cout << ans << std::endl;
}
