// URL: https://atcoder.jp/contests/abc118/submissions/4284541
// Date: Sat, 16 Feb 2019 12:24:10 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {

    int N; std::cin >> N;
    int initial; std::cin >> initial;
    int initial2; std::cin >> initial2;
    int ans = gcd(initial, initial2);
    for (int i = 2; i < N; ++i) {
        int A; std::cin >> A;
        ans = gcd(ans, A);
    }
    std::cout << ans << std::endl;
}
