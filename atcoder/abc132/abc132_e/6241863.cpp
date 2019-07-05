// URL: https://atcoder.jp/contests/abc132/submissions/6241863
// Date: Fri, 05 Jul 2019 05:33:33 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    vector<vector<int>> nodes(N);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        nodes[u - 1].push_back(v - 1);
    }

    vector<array<int, 3>> memo(N, { -1,-1,-1 });

    int S, T;
    cin >> S >> T;

    queue<pair<int, int>> q;
    q.push(make_pair(S - 1, 0));
    memo[S - 1][0] = 0;
    while (!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();
        for (auto& next : nodes[now.first]) {
            int tmp = (now.second + 1) % 3;
            if (memo[next][tmp] != -1)continue;
            memo[next][tmp] = memo[now.first][now.second] + 1;
            q.push(make_pair(next, tmp));
        }
    }
    int ans = memo[T - 1][0];
    if (ans != -1)ans /= 3;
    cout << ans << endl;
}
