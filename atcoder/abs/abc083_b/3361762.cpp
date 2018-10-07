// URL: https://atcoder.jp/contests/abs/submissions/3361762
// Date: Sun, 07 Oct 2018 06:58:03 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
	int N, A, B;
	std::cin >> N >> A >> B;
	int sum = 0;
	for (int i = 1; i <= N; ++i) {
		int persum = 0;
		for (int j = i; j > 0; j /= 10) {
			persum += j % 10;
		}
		if (A <= persum && persum <= B)sum += i;
	}
	printf("%d", sum);
}
