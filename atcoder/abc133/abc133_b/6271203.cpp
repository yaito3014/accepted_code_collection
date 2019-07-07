// URL: https://atcoder.jp/contests/abc133/submissions/6271203
// Date: Sun, 07 Jul 2019 12:08:19 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N, D;
    std::cin >> N >> D;
    std::vector<std::vector<int>> X(N, std::vector<int>(D, 0));
    for (auto& v : X)for (auto& w : v)std::cin >> w;

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {

            int dis = 0;
            for (int d = 0; d < D; ++d) {
                int tmp = std::abs(X[i][d] - X[j][d]);
                dis += tmp * tmp;
            }
            int sq = std::sqrt(dis);
            if (sq * sq == dis)++ans;

        }
    }

    std::cout << ans << std::endl;

}
