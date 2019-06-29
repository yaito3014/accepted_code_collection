// URL: https://atcoder.jp/contests/abc132/submissions/6172547
// Date: Sat, 29 Jun 2019 12:29:52 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<int> d(N);
    for (auto& v : d)std::cin >> v;
    std::sort(begin(d), end(d));
    int ans = d[N / 2] - d[N / 2 - 1];
    std::cout << ans << std::endl;
}
