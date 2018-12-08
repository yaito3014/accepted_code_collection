// URL: https://atcoder.jp/contests/abc115/submissions/3744389
// Date: Sat, 08 Dec 2018 12:39:23 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
int main() {
	int N, K;
	std::cin >> N >> K;
	std::vector<int> arr(N);
	for (auto&i : arr)std::cin >> i;
	std::sort(arr.begin(), arr.end());
	int ans = INT_MAX;
	for (int i = 0; i < N - K + 1; ++i)ans = std::min(ans, arr[i + K - 1] - arr[i]);
	std::cout << ans << std::endl;
}
