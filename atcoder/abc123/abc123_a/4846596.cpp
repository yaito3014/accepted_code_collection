// URL: https://atcoder.jp/contests/abc123/submissions/4846596
// Date: Sat, 06 Apr 2019 12:11:44 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main() {

    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int min = 124, max = -1;
    int antenna;
    int k = 0;
    for (int i = 0; i < 5; ++i) {
        std::cin >> antenna;
        min = std::min(min, antenna);
        max = std::max(max, antenna);
    }
    std::cin >> k;
    std::cout << (max - min <= k ? "Yay!" : ":(") << std::endl;
}
