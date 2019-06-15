// URL: https://atcoder.jp/contests/diverta2019-2/submissions/5924876
// Date: Sat, 15 Jun 2019 12:36:36 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> pos(N);
    for (auto& v : pos)std::cin >> v.first >> v.second;
    std::map<std::pair<int, int>, int> memo;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j)continue;
            int p = pos[i].first - pos[j].first;
            int q = pos[i].second - pos[j].second;
            ++memo[std::make_pair(p, q)];
        }
    }
    auto pq = *std::max_element(memo.begin(), memo.end(), [](auto a, auto b) { return a.second < b.second; });

    std::cout << (N == 1 ? 1 : N - pq.second) << std::endl;

}
