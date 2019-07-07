// URL: https://atcoder.jp/contests/abc133/submissions/6267437
// Date: Sun, 07 Jul 2019 12:02:02 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N, A, B;
    std::cin >> N >> A >> B;

    int ans = std::min(N * A, B);
    std::cout << ans << std::endl;
}
