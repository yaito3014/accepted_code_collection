// URL: https://atcoder.jp/contests/abc160/submissions/11297951
// Date: Sat, 28 Mar 2020 12:44:52 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, X, Y;
  cin >> N >> X >> Y, --X, --Y;
  vector<int> ans(N - 1, 0), dis(N, 0);
  for (int i = 0; i < N; ++i) {
    fill(begin(dis), end(dis), 0);
    for (int j = i + 1, d = 0; j < N; ++j)dis[j] = ++d;
    for (int j = i - 1, d = 0; j >= 0; --j)dis[j] = ++d;
    if (dis[X] > dis[Y])swap(X, Y);
    dis[Y] = min(dis[Y], dis[X] + 1);
    for (int j = Y + 1, d = dis[Y]; j < N; ++j)dis[j] = min(dis[j], ++d);
    for (int j = Y - 1, d = dis[Y]; j >= 0; --j)dis[j] = min(dis[j], ++d);
    for (int j = i + 1; j < N; ++j)++ans[dis[j] - 1];
  }
  for (auto& e : ans)cout << e << "
";
}
