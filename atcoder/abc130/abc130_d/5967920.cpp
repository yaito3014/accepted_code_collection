// URL: https://atcoder.jp/contests/abc130/submissions/5967920
// Date: Sun, 16 Jun 2019 12:32:18 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N;
    int64_t K;
    std::cin >> N >> K;
    std::vector<int> a(N);
    for (auto& v : a)std::cin >> v;
    int64_t ans = 0;
    int64_t sum = 0;
    int right = 0;
    for (int left = 0; left < N; ++left) {
        while (right < N && sum + a[right] < K) {
            sum += a[right];
            ++right;
        }
        ans += N - right;
        if (right == left)++right;
        else sum -= a[left];
    }
    std::cout << ans << std::endl;
}
