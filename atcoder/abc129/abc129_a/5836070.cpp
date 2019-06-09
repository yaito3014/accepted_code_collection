// URL: https://atcoder.jp/contests/abc129/submissions/5836070
// Date: Sun, 09 Jun 2019 12:02:55 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int P, Q, R;
    std::cin >> P >> Q >> R;
    int ans = std::min(P + Q, std::min(Q + R, R + P));
    std::cout << ans << std::endl;

}
