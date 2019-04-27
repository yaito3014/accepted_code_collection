// URL: https://atcoder.jp/contests/abc125/submissions/5164570
// Date: Sat, 27 Apr 2019 14:09:51 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {

    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (auto& i : A)std::cin >> i;

    std::vector<int> L(N + 1, 0), R(N + 1, 0);
    for (int i = 0; i < N; ++i)L[i + 1] = gcd(L[i], A[i]);
    for (int i = N - 1; i >= 0; --i)R[i] = gcd(R[i + 1], A[i]);
    int ans = -1;
    for (int i = 0; i < N; ++i) {
        ans = std::max(ans, gcd(L[i], R[i + 1]));
    }
    std::cout << ans << std::endl;
}
