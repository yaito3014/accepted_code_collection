// URL: https://atcoder.jp/contests/tenka1-2018-beginner/submissions/3480009
// Date: Sat, 27 Oct 2018 12:11:19 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int main() {
	int A, B, K;
	std::cin >> A >> B >> K;
	for (int i = 1; i <= K; ++i) {
		((i%2)?B:A) += (((i % 2) ? A : B) /= 2);
	}
	printf("%d %d", A, B);
}
