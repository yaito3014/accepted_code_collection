// URL: https://atcoder.jp/contests/abc123/submissions/4852751
// Date: Sat, 06 Apr 2019 12:37:19 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main() {

    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int sum = 0;
    int max = -1;
    for (int i = 0; i < 5; ++i) {
        int time;
        std::cin >> time;
        int ceiled = std::ceil(time / 10.f) * 10;
        max = std::max(max, ceiled - time);
        sum += ceiled;
    }
    std::cout << sum - max << std::endl;
}
