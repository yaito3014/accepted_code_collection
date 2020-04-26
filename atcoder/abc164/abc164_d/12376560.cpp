// URL: https://atcoder.jp/contests/abc164/submissions/12376560
// Date: Sun, 26 Apr 2020 12:41:45 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  const size_t len = S.length();
  reverse(begin(S), end(S));
  vector<int> dp(len + 1, 0);
  for (size_t i = 0, d = 1; i < len; ++i, d = d * 10 % 2019)
    dp[i + 1] = (dp[i] + (S[i] - '0') * d) % 2019;
  array<long long int, 2019> counts = {};
  for (auto& e : dp)++counts[e];
  long long int ans = 0;
  for (auto& e : counts)ans += e * (e - 1) / 2;
  cout << ans << endl;
}
