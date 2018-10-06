// URL: https://atcoder.jp/contests/abc112/submissions/3359624
// Date: Sat, 06 Oct 2018 23:19:00 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
	int N = 0;
	std::cin >> N;
	std::map<std::pair<int, int>, int> inputs;
	auto itr = inputs.begin();
	{
		int x, y;
		for (int i = 0; i < N; ++i) {
			std::cin >> x >> y;
			std::cin >> inputs[std::make_pair(x, y)];
			if (inputs[std::make_pair(x, y)] >= 1)itr = inputs.find(std::make_pair(x, y));
		}
	}
	int x = 0;
	int y = 0;
	int height = 0;
	for (x = 0; x <= 100; ++x) {
		for (y = 0; y <= 100; ++y) {
			bool flag = false;
			height = itr->second + abs(itr->first.first - x) + abs(itr->first.second - y);
			if (std::all_of(inputs.begin(), inputs.end(), [&](const auto& arg) {
				return std::max(height - abs(arg.first.first - x) - abs(arg.first.second - y), 0) == arg.second;
			})) {
				flag = true;
			}
			if (flag) {
				printf("%d %d %d", x, y, height);
				return 0;
			}
		}
	}
	return 0;
}
