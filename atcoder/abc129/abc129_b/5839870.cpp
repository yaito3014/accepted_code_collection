// URL: https://atcoder.jp/contests/abc129/submissions/5839870
// Date: Sun, 09 Jun 2019 12:08:50 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<int> cumsum(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        int W;
        std::cin >> W;
        cumsum[i + 1] = cumsum[i] + W;
    }
    int ans = INT_MAX;
    for (int i = 1; i < N; ++i) {
        int S1 = cumsum[i];
        int S2 = cumsum[N] - S1;
        ans = std::min(ans, std::abs(S1 - S2));
    }
    std::cout << ans << std::endl;

}
