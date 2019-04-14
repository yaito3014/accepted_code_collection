// URL: https://atcoder.jp/contests/s8pc-6/submissions/4973621
// Date: Sun, 14 Apr 2019 11:23:08 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;
    std::vector<int> A(N);
    std::vector<int> B(N);
    int64_t dif = 0;
    int64_t ans = INT64_MAX;
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i] >> B[i];
        dif += B[i] - A[i];
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int64_t en = A[i], ex = B[j];
            int64_t sum = 0;
            for (int k = 0; k < N; ++k)sum += abs(en - A[k]) + abs(ex - B[k]);
            ans = std::min(ans, sum+dif);
        }
    }

    std::cout << ans << std::endl;
}
