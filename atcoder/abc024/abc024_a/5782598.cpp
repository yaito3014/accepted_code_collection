// URL: https://atcoder.jp/contests/abc024/submissions/5782598
// Date: Mon, 03 Jun 2019 23:09:41 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int A,B,C,K;
	std::cin >> A >> B >> C >> K;
	int S,T;
	std::cin >> S >> T;
	int ans = A*S+B*T;
	if(S+T>=K)ans-=C*(S+T);
	std::cout<<ans<<std::endl;
	
}
