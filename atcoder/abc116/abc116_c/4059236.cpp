// URL: https://atcoder.jp/contests/abc116/submissions/4059236
// Date: Sun, 20 Jan 2019 14:29:23 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <vector>
int main() {
	int N;
	std::cin >> N;
	std::vector<int> h(N);
	for (auto&i : h)std::cin >> i;
	h.push_back(0);
	int ans = 0;
	int count = 0;
	int prev = 0;
	do {
		count = 0;
		prev = 0;
		for (auto&i : h) {
			if (!(i > 0 || prev <= 0))++count;
			prev = i;
		}
		for (auto&i : h)--i;
		ans += count;
	} while (count);
	printf("%d", ans);
}
