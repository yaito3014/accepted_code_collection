// URL: https://atcoder.jp/contests/abc114/submissions/3703036
// Date: Sun, 02 Dec 2018 12:08:39 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <string>
#include <algorithm>
int main() {
	std::string str;
	std::cin >> str;
	int ans = 0x7fffffff;
	for (int i = 0; i < str.length() - 2; ++i) {
		ans = std::min(ans, abs(753-std::stoi(str.substr(i, 3))));
	}
	std::cout << ans << std::endl;
}
