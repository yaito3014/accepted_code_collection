// URL: https://atcoder.jp/contests/abc172/submissions/14758020
// Date: Sat, 27 Jun 2020 12:47:19 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> d(N + 1, 0);
  for (int i = 1; i <= N; ++i)
    for (int j = 1; i * j <= N; ++j) ++d[i * j];
  long long ans = 0;
  for (long long i = 1; i <= N; ++i) ans += i * d[i];
  cout << ans << '\n';
}
