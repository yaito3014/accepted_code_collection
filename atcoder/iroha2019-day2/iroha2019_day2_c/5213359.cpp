// URL: https://atcoder.jp/contests/iroha2019-day2/submissions/5213359
// Date: Wed, 01 May 2019 04:50:18 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> H(N);
    for (int i = 0; i < N; ++i) {
        H[i].first = i;
        std::cin >> H[i].second;
    }

    std::sort(H.begin(), H.end(), [](auto a, auto b) { return a.second < b.second; });
    int prev = -1;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (prev != H[i].second)++count;
        prev = H[i].second;
        H[i].second = count;
    }
    std::sort(H.begin(), H.end(), [](auto a, auto b) { return a.first < b.first; });
    for (auto& i : H) {
        std::cout << i.second << std::endl;
    }
}
