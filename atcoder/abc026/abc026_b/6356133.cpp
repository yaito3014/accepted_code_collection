// URL: https://atcoder.jp/contests/abc026/submissions/6356133
// Date: Sat, 13 Jul 2019 03:34:49 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main() {
	
	const double PI = 3.14159265358979;
	
	int N;
	std::cin >> N;
	std::vector<int> R(N);
	for(auto&v:R)std::cin >> v;
	std::sort(rbegin(R),rend(R));
	double ans = 0;
	for(int i=0;i<N;++i)
		ans += R[i]*R[i]*PI*(i%2?-1:1);
	
	std::cout << std::fixed << std::setprecision(7) << ans << std::endl;
	
}
