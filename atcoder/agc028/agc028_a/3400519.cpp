// URL: https://atcoder.jp/contests/agc028/submissions/3400519
// Date: Sat, 13 Oct 2018 14:40:28 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <string>

unsigned long long int gcd(unsigned long long int a, unsigned long long int b) {
	return a % b ? gcd(b, a%b) : b;
}

unsigned long long int lcm(unsigned long long int a, unsigned long long int b) {
	return a * (b / gcd(a, b));
}
int main() {

	int N, M;
	std::cin >> N >> M;
	std::string S, T;
	std::cin >> S;
	std::cin >> T;

	int step = gcd(N, M);
	unsigned long long int L = lcm(N, M);

	bool flag = true;
	for (int i = 0; i < step; ++i) {
		if (S[i*L / M] != T[i*L / N])flag = false;
	}

	if (flag)std::cout << L << std::endl;
	else std::cout << -1 << std::endl;

	//d**n**s**u**s**r**a**y**u**k**u**a**i**i**a**
	//d****u****j****r****u****n****u****m****a****

	return 0;
}
