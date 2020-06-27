// URL: https://atcoder.jp/contests/abc172/submissions/14774539
// Date: Sat, 27 Jun 2020 13:36:00 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string S, T;
  cin >> S >> T;
  int ans = 0;
  for (int i = 0; i < S.length(); ++i)
    if (S[i] != T[i]) ++ans;
  cout << ans << '\n';
}
