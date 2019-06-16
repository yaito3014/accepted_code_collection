// URL: https://atcoder.jp/contests/abc130/submissions/5963610
// Date: Sun, 16 Jun 2019 12:20:14 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int64_t W, H, x, y;
    std::cin >> W >> H >> x >> y;
    long double ans = W * H / 2.0l;
    bool exist = W == x * 2 && H == y * 2;
    std::cout << std::fixed << std::setprecision(10) << ans << " " << exist << std::endl;

}
