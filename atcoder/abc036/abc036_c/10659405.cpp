// URL: https://atcoder.jp/contests/abc036/submissions/10659405
// Date: Sun, 08 Mar 2020 06:19:36 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<pair<int, int>> ans(N);
  for (int i = 0; i < N; ++i) {
    int a;
    cin >> a;
    ans[i] = make_pair(i, a);
  }
  sort(begin(ans), end(ans), [](const auto& a, const auto& b) { return a.second < b.second; });
  int index = -1;
  int prev = -1;
  for (auto& p : ans) {
    if (prev != p.second)++index;
    prev = p.second;
    p.second = index;
  }
  sort(begin(ans), end(ans));
  for (auto& p : ans)cout << p.second << '\n';
}
