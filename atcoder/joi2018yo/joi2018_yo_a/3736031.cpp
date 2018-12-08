// URL: https://atcoder.jp/contests/joi2018yo/submissions/3736031
// Date: Sat, 08 Dec 2018 05:58:32 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>

int main() {
	int N, A, B, C, D;
	std::cin >> N >> A >> B >> C >> D;
	std::cout << std::min((N/A+!!(N%A))*B,(N/C+!!(N%C))*D) << std::endl;
}
