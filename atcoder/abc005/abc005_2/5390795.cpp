// URL: https://atcoder.jp/contests/abc005/submissions/5390795
// Date: Mon, 13 May 2019 13:31:23 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	int N;
	std::cin >> N;
	int ans = 101;
	for(int i=0;i<N;++i){
		int T;
		std::cin >> T;
		ans = std::min(ans, T);
	}
	std::cout << ans << std::endl;
}
