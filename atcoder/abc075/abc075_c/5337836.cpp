// URL: https://atcoder.jp/contests/abc075/submissions/5337836
// Date: Sat, 11 May 2019 07:12:33 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N, M;
    std::cin >> N >> M;

    std::vector<std::deque<int>> nodes(N);
    std::vector<std::pair<int, int>> edges(M);
    for (int i = 0; i < M; ++i) {
        int a, b;
        std::cin >> a >> b;
        nodes[a - 1].push_back(b - 1);
        nodes[b - 1].push_back(a - 1);
        edges[i] = std::make_pair(a - 1, b - 1);
    }
    int ans = 0;
    for (int i = 0; i < M; ++i) {
        std::vector<bool> memo(N, false);
        std::queue<int> q;
        q.push(0);
        while (!q.empty()) {
            int from = q.front();
            q.pop();
            memo[from] = true;
            for (auto& to : nodes[from]) {
                if (
                    (edges[i].first == from && edges[i].second == to) ||
                    (edges[i].first == to && edges[i].second == from)
                    )continue;
                if (!memo[to]) {
                    q.push(to);
                }
            }
        }
        if (std::any_of(memo.begin(), memo.end(), [](auto a) { return !a; }))++ans;
    }

    std::cout << ans << std::endl;

}
