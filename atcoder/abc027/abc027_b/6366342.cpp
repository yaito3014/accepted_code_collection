// URL: https://atcoder.jp/contests/abc027/submissions/6366342
// Date: Sun, 14 Jul 2019 04:52:18 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<int> a(N);
    for (auto& v : a)std::cin >> v;
    std::vector<int> sum(N + 1, 0);
    for (int i = 0; i < N; ++i)sum[i + 1] = sum[i] + a[i];
    int ideal = sum[N] / N;
    int ans = 0;
    for (int i = 1; i <= N - 1; ++i)
        if (sum[i] != ideal * i)++ans;
    if (sum[N] % N != 0)ans = -1;
    std::cout << ans << std::endl;
}
