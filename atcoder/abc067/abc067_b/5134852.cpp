// URL: https://atcoder.jp/contests/abc067/submissions/5134852
// Date: Sat, 27 Apr 2019 06:45:12 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, K;
    std::cin >> N >> K;
    std::vector<int> l(N);
    for (auto& i : l)std::cin >> i;
    std::sort(l.rbegin(), l.rend());
    int ans = 0;
    for (int i = 0; i < K; ++i) {
        ans += l[i];
    }
    std::cout << ans << std::endl;
}
