// URL: https://atcoder.jp/contests/abc129/submissions/5850679
// Date: Sun, 09 Jun 2019 13:00:40 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N, M;
    std::cin >> N >> M;
    int prev = 0;
    int prevnum = 2;
    int64_t ans = 1;
    std::vector<int> a(M);
    for (auto& v : a)std::cin >> v;
    a.push_back(N + 1);
    std::vector<int64_t> dp(N+1, 1);
    for (auto& v : a) {
        int num = v - prev;

        if (num == 0) {
            ans = 0;
            break;
        }

        for (int i = prevnum; i < num; ++i)dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000007;
        ans = (ans * dp[num - 1]) % 1000000007;

        prev = v + 1;
        prevnum = std::max(num, 2);
    }
    std::cout << ans << std::endl;
}
