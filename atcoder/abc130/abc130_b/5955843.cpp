// URL: https://atcoder.jp/contests/abc130/submissions/5955843
// Date: Sun, 16 Jun 2019 12:05:33 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, X;
    std::cin >> N >> X;
    int ans = 1;
    int pos = 0;
    for (int i = 0; i < N; ++i) {
        int L;
        std::cin >> L;
        pos += L;
        if (pos <= X)++ans;
        else break;
    }
    std::cout << ans << std::endl;
}
