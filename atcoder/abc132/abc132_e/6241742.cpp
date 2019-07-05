// URL: https://atcoder.jp/contests/abc132/submissions/6241742
// Date: Fri, 05 Jul 2019 05:17:59 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    vector<array<vector<pair<int, int>>, 3>> nodes(N);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        nodes[u - 1][0].push_back(make_pair(v - 1, 1));
        nodes[u - 1][1].push_back(make_pair(v - 1, 2));
        nodes[u - 1][2].push_back(make_pair(v - 1, 0));
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
        for (auto& next : nodes[now.first][now.second]) {
            if (memo[next.first][next.second] != -1)continue;
            memo[next.first][next.second] = memo[now.first][now.second] + 1;
            q.push(next);
        }
    }
    int ans = memo[T - 1][0];
    if (ans != -1)ans /= 3;
    cout << ans << endl;
}
