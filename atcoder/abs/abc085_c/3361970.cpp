// URL: https://atcoder.jp/contests/abs/submissions/3361970
// Date: Sun, 07 Oct 2018 07:35:12 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
#include <vector>

int main() {

	int N, Y;
	std::cin >> N >> Y;
	int x, y, z;
	for (x = N; x >= 0; --x)
		for (y = N - x; y >= 0; --y) {
			z = N - (x + y);
			if (x * 10000 + y * 5000 + z * 1000 == Y) {
				printf("%d %d %d", x, y, z);
				return 0;
			}
		}
	printf("-1 -1 -1");
	return 0;
}
