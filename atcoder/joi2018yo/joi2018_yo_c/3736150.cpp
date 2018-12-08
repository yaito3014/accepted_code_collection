// URL: https://atcoder.jp/contests/joi2018yo/submissions/3736150
// Date: Sat, 08 Dec 2018 06:16:18 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
int main() {
	int H, W;
	std::cin >> H >> W;
	int ans = INT_MAX;
	std::vector<std::vector<int>> A(H, std::vector<int>(W));
	for (int h = 0; h < H; ++h)for (int w = 0; w < W; ++w)std::cin >> A[h][w];
	for (int h = 0; h < H; ++h)for (int w = 0; w < W; ++w) {
		int sum = 0;
		for (int h2 = 0; h2 < H; ++h2)for (int w2 = 0; w2 < W; ++w2)sum += std::min(abs(h - h2),abs(w - w2))*A[h2][w2];
		ans = std::min(ans, sum);
	}
	std::cout << ans << std::endl;
}
