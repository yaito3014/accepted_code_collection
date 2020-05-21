// URL: https://atcoder.jp/contests/agc016/submissions/13452270
// Date: Thu, 21 May 2020 09:53:20 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  auto p = minmax_element(cbegin(A), cend(A));
  int s = *p.first, l = *p.second;
  int x = count(cbegin(A), cend(A), s), y = N - x;
  bool ans = l - s < 2 &&
             (s == l ? s == N - 1 || 2 * s <= N : x < l && 2 * (l - x) <= y);
  cout << (ans ? "Yes" : "No") << endl;
}
