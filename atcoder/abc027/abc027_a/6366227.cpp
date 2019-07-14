// URL: https://atcoder.jp/contests/abc027/submissions/6366227
// Date: Sun, 14 Jul 2019 04:35:14 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int l1, l2, l3;
    std::cin >> l1 >> l2 >> l3;
    int ans =
        (l1 == l2) ? l3 :
        (l1 == l3) ? l2 :
        l1;
    std::cout << ans << std::endl;

}
