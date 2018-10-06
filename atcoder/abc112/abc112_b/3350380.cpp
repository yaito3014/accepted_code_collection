// URL: https://atcoder.jp/contests/abc112/submissions/3350380
// Date: Sat, 06 Oct 2018 12:53:14 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
	int N, T;
	std::cin >> N >> T;
	bool is_in_time = false;
	int min_elem = 1000 + 1;
	int min_index = 100 + 1;
	for (int i = 0; i < N; ++i) {
		int c, t;
		std::cin >> c >> t;
		if (c < min_elem && t <= T) {
			min_elem = c;
			min_index = i;
			is_in_time = true;
		}
	}
	if (is_in_time) {
		printf("%d", min_elem);
	}
	else printf("TLE");
}
