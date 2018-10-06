// URL: https://atcoder.jp/contests/abc112/submissions/3355688
// Date: Sat, 06 Oct 2018 13:45:21 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
	int N, M;
	std::cin >> N >> M;
	int gcd = M / N;
	for (; gcd > 1&&M%gcd; --gcd) {
		if (M > gcd*N) {
			if ((M - gcd * N) % gcd == 0)break;
		}
	}
	printf("%d", gcd);
}
