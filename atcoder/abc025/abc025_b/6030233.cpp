// URL: https://atcoder.jp/contests/abc025/submissions/6030233
// Date: Thu, 20 Jun 2019 08:54:56 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, A, B;
    std::cin >> N >> A >> B;
    int pos = 0;
    for (int i = 0; i < N; ++i) {
        std::string s;
        int d;
        std::cin >> s >> d;
        int n = std::max(A, std::min(d, B));
        if (s == "West")pos -= n;
        else if (s == "East")pos += n;
    }
    if (pos != 0)std::cout << (pos < 0 ? "West" : "East") << " ";
    std::cout << std::abs(pos) << std::endl;
}
