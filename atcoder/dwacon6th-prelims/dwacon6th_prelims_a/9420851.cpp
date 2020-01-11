// URL: https://atcoder.jp/contests/dwacon6th-prelims/submissions/9420851
// Date: Sat, 11 Jan 2020 11:06:30 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<string> s(N);
  vector<int> t(N);
  for (int i = 0; i < N; ++i)
    cin >> s[i] >> t[i];
  string X;
  cin >> X;
  bool stopped = false;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    if (stopped)ans += t[i];
    if (s[i] == X)stopped = true;
  }
  cout << ans << endl;
}
