// URL: https://atcoder.jp/contests/abc057/submissions/5035013
// Date: Sat, 20 Apr 2019 10:29:05 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    uint64_t N;
    std::cin >> N;
    int ans = log10(N) + 1;
    for (uint64_t A = 1ull; A * A <= N; ++A) {
        if (N % A)continue;
        int big = std::max(log10(A), log10(N / A))+1;
        ans = std::min(ans, big);
    }
    std::cout << ans << std::endl;
}
