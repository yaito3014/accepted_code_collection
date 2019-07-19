// URL: https://atcoder.jp/contests/abc094/submissions/6430275
// Date: Fri, 19 Jul 2019 02:02:22 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<int> X(N);
    for (auto& v : X)std::cin >> v;

    std::vector<int> sorted = X;
    std::sort(begin(sorted), end(sorted));
    int half = N / 2;
    for (int i = 0; i < N; ++i) {
        int n = std::distance(begin(sorted), std::lower_bound(begin(sorted), end(sorted), X[i]));
        int mid = -1;
        if (n < half)mid = sorted[half];
        else mid = sorted[half - 1];
        std::cout << mid << "
";
    }

}
