// URL: https://atcoder.jp/contests/abc133/submissions/6278518
// Date: Sun, 07 Jul 2019 12:27:17 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    unsigned int L, R;
    std::cin >> L >> R;

    int ans = INT_MAX;

    if (L + 2019 < R) {
        int l1 = 0;
        int r1 = R % 2019;
        int l2 = L % 2019;
        int r2 = 2019;
        for (int i = l1; i <= r1; ++i) {
            for (int j = l1; j <= r1; ++j)
                if (i != j)ans = std::min(ans, (i * j) % 2019);
            for (int j = l2; j <= r2; ++j)
                if (i != j)ans = std::min(ans, (i * j) % 2019);
        }
        for (int i = l2; i <= r2; ++i) {
            for (int j = l1; j <= r1; ++j)
                if (i != j)ans = std::min(ans, (i * j) % 2019);
            for (int j = l2; j <= r2; ++j)
                if (i != j)ans = std::min(ans, (i * j) % 2019);
        }
    }
    else {
        int l = L % 2019;
        int r = R % 2019;
        for (int i = l; i <= r; ++i) {
            for (int j = l; j <= r; ++j) {
                if (i != j)ans = std::min(ans, (i * j) % 2019);
            }
        }
    }

    std::cout << ans << std::endl;

}
