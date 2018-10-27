// URL: https://atcoder.jp/contests/tenka1-2018-beginner/submissions/3478595
// Date: Sat, 27 Oct 2018 12:02:11 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string str;
	std::cin >> str;
	if(str.length()==3)std::reverse(str.begin(), str.end());
	std::cout << str;
}
