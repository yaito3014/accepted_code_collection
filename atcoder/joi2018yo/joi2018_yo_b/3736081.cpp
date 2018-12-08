// URL: https://atcoder.jp/contests/joi2018yo/submissions/3736081
// Date: Sat, 08 Dec 2018 06:06:36 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>

int main() {
	int N;
	std::cin >> N;
	int ans = 0;
	int count = 0;
	for (int i = 0; i < N; ++i) {
		int A;
		std::cin >> A;
		count=A?count+1:0;
		ans=std::max(ans, count);
	}
	std::cout << ans+1 << std::endl;
}
