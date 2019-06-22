// URL: https://atcoder.jp/contests/abc131/submissions/6063710
// Date: Sat, 22 Jun 2019 12:25:08 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int64_t gcd(int64_t a, int64_t b) {
    return b ? gcd(b, a % b) : a;
}

int64_t lcm(int64_t a, int64_t b) {
    return a / gcd(a, b) * b;
}

int main() {

    int64_t A, B;
    int64_t C, D;
    std::cin >> A >> B >> C >> D;

    int64_t a = (A - 1) / C + (A - 1) / D - (A - 1) / lcm(C, D);
    int64_t b = B / C + B / D - B / lcm(C, D);
    int64_t ans = (B - A + 1) - (b - a);
    std::cout << ans << std::endl;

}
