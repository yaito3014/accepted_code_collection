// URL: https://atcoder.jp/contests/abc113/submissions/3537047
// Date: Sun, 04 Nov 2018 12:29:33 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
	int N, T, A;
	std::cin >> N >> T >> A;
	double h = (T-A)/0.006;
	int ans;
	double min;
	for (int i = 0; i < N; ++i) {
		int H;
		std::cin >> H;
		min = i ? min > abs(H - h) ? ans = i, abs(H - h) : min : abs(H - h);
	}
	std::cout << ans + 1 << std::endl;
}
