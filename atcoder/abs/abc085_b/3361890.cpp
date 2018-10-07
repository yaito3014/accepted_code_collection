// URL: https://atcoder.jp/contests/abs/submissions/3361890
// Date: Sun, 07 Oct 2018 07:20:28 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	
	int N;
	std::cin >> N;
	std::vector<int> vec(N);
	for (auto&v : vec)std::cin >> v;
	std::sort(vec.begin(), vec.end());
	vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
	printf("%d", vec.size());

	return 0;
}
