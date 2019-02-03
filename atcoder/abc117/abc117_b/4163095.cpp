// URL: https://atcoder.jp/contests/abc117/submissions/4163095
// Date: Sun, 03 Feb 2019 13:06:34 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
int main() {
	int N;
	std::cin >> N;
	int maxL = 0;
	int sum = 0;
	for (int i = 0; i < N; ++i) {
		int L;
		std::cin >> L;
		maxL = std::max(maxL, L);
		sum += L;
	}
	std::cout << ((sum - maxL > maxL) ? "Yes" : "No") << std::endl;
}
