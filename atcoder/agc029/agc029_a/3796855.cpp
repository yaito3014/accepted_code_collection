// URL: https://atcoder.jp/contests/agc029/submissions/3796855
// Date: Sat, 15 Dec 2018 12:46:06 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <string>
int main() {
	std::string str;
	std::cin >> str;
	uint64_t ans = 0;
	int j=-1;
	for (size_t i = 0; i < str.size(); ++i) {
		if (j==-1&&str[i] == 'B')j = i;
		if (j!=-1&&str[i] == 'W')ans += i-j++;
	}
	printf("%lld", ans);
}
