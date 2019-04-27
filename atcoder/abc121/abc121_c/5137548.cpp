// URL: https://atcoder.jp/contests/abc121/submissions/5137548
// Date: Sat, 27 Apr 2019 10:38:18 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N, M;
    std::cin >> N >> M;
    std::vector<std::pair<int64_t, int>> shops(N);
    for (auto& i : shops)std::cin >> i.first >> i.second;
    std::sort(shops.begin(), shops.end());
    int sum = 0;
    int64_t ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += shops[i].first * std::min(M, shops[i].second);
        M = std::max(M - shops[i].second, 0);
    }
    std::cout << ans << std::endl;
}
