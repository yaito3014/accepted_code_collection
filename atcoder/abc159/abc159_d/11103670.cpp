// URL: https://atcoder.jp/contests/abc159/submissions/11103670
// Date: Sun, 22 Mar 2020 12:23:31 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& e : A)cin >> e;
  vector<int64_t> count(N, 0);
  for (const auto& e : A)++count[e - 1];
  int64_t ans = 0;
  for (const auto& e : count)
    ans += e * (e - 1) / 2;
  for (const auto& e : A) {
    cout << (ans - count[e - 1] * (count[e - 1] - 1) / 2 + (count[e - 1] - 1) * (count[e - 1] - 2) / 2) << "\n";
  }
}
