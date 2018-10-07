// URL: https://atcoder.jp/contests/abs/submissions/3361843
// Date: Sun, 07 Oct 2018 07:11:58 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int N;
	std::cin >> N;
	std::vector<int> vec(N, 0);
	for (auto&v : vec)std::cin >> v;
	int Alice = 0, Bob = 0;
	for (int i = 1; i <= N; ++i) {
		auto itr = std::max_element(vec.begin(), vec.end());
		if (i % 2)Alice += *itr;
		else Bob += *itr;
		vec.erase(itr);
	}
	printf("%d", Alice - Bob);
	return 0;
}
