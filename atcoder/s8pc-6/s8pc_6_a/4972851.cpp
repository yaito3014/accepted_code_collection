// URL: https://atcoder.jp/contests/s8pc-6/submissions/4972851
// Date: Sun, 14 Apr 2019 11:04:27 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, T;
    std::cin >> N >> T;
    int sum = 0;
    for (int i = 0; i < N-1; ++i) {
        int A;
        std::cin >> A;
        sum += A;
    }
    std::cout << (sum / T + (sum % T ? 1 : 0)) << std::endl;
}
