// URL: https://atcoder.jp/contests/abs/submissions/3359667
// Date: Sat, 06 Oct 2018 23:48:24 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
	int a = 0, b = 0;
	std::cin >> a >> b;
	std::cout << (a*b % 2 ? "Odd" : "Even") << std::endl;
}
