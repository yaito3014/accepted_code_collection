// URL: https://atcoder.jp/contests/abc113/submissions/3543433
// Date: Sun, 04 Nov 2018 14:49:08 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <tuple>

int main() {
	int N, M;
	std::cin >> N >> M;
	//市の番号、県の番号、誕生年
	std::vector<std::tuple<int, int, int>> cities;
	for (int i = 0; i < M; ++i) {
		int P, Y;
		std::cin >> P >> Y;
		cities.emplace_back(i, P, Y);
	}

	std::sort(cities.begin(), cities.end(), [](auto a, auto b) { return std::get<1>(a) == std::get<1>(b) ? std::get<2>(a) < std::get<2>(b) : std::get<1>(a) < std::get<1>(b); });
	{
		int i = 1;
		int prev = -1;
		for (auto &v : cities) {
			std::get<2>(v) = (prev != std::get<1>(v) ? i = 1 : ++i);
			prev = std::get<1>(v);
		}
	}
	std::sort(cities.begin(), cities.end(), [](auto a, auto b) { return std::get<0>(a) < std::get<0>(b); });
	for (auto&v : cities) {
		printf("%06d%06d
", std::get<1>(v), std::get<2>(v));
	}
}
