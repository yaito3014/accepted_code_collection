// URL: https://atcoder.jp/contests/m-solutions2019/submissions/5734311
// Date: Sat, 01 Jun 2019 13:15:11 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;
    std::vector<std::vector<int>> T(N);
    for (int i = 0; i < N - 1; ++i) {
        int a, b;
        std::cin >> a >> b;
        T[a - 1].push_back(b - 1);
        T[b - 1].push_back(a - 1);
    }
    std::vector<int> c(N);
    for (auto& v : c)std::cin >> v;
    std::vector<int> ans(N);
    std::sort(c.begin(), c.end());
    int M = std::accumulate(c.begin(), std::prev(c.end()), 0);
    std::vector<int> parent(N, -1);
    std::stack<int> s;
    s.push(0);
    while (!s.empty()) {
        int now = s.top();
        s.pop();
        ans[now] = c.back();
        c.pop_back();
        for (auto& next : T[now]) {
            if (next == parent[now])continue;
            parent[next] = now;
            s.push(next);
        }
    }
    std::cout << M << "\n";
    for (auto& v : ans)std::cout << v << " "; std::cout << std::endl;
}
