// URL: https://atcoder.jp/contests/abc022/submissions/5717144
// Date: Fri, 31 May 2019 22:03:50 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int N,S,T;
	std::cin >> N >> S >> T;
	int W;
	int ans = 0;
	for(int i=0;i<N;++i){
		int A;
		std::cin >> A;
		W+=A;
		if(S<=W&&W<=T)++ans;
	}
	std::cout << ans << std::endl;
	
}
