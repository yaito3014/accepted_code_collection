// URL: https://atcoder.jp/contests/abc132/submissions/6170133
// Date: Sat, 29 Jun 2019 12:21:08 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int n;
    std::cin >> n;
    std::vector<int> p(n);
    for (auto& v : p)std::cin >> v;
    int ans = 0;
    for (int i = 0; i < n - 2; ++i) {
        int m = std::min(p[i], p[i + 2]);
        int M = std::max(p[i], p[i + 2]);
        if (m < p[i + 1] && p[i + 1] < M)++ans;
    }
    std::cout << ans << std::endl;
}
