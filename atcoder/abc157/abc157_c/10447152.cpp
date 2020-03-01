// URL: https://atcoder.jp/contests/abc157/submissions/10447152
// Date: Sun, 01 Mar 2020 12:35:36 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> s(M), c(M);
  for (int i = 0; i < M; ++i)cin >> s[i] >> c[i];
  vector<int> ans(N, -1);
  for (int i = 0; i < M; ++i) {
    if (ans[s[i] - 1] != -1 && ans[s[i] - 1] != c[i]) {
      cout << -1 << endl;
      return 0;
    }
    ans[s[i] - 1] = c[i];
  }
  if (N > 1 && ans[0] == 0) {
    cout << -1 << endl;
    return 0;
  }
  for (int i = 0; i < N; ++i) {
    if (ans[i] != -1)continue;
    ans[i] = (N > 1 && i == 0) ? 1 : 0;
  }
  for (const auto elem : ans)cout << elem;
  cout << endl;
}
