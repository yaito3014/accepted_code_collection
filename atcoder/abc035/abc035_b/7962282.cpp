// URL: https://atcoder.jp/contests/abc035/submissions/7962282
// Date: Sun, 13 Oct 2019 11:10:39 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  string S;
  cin >> S;
  int T;
  cin >> T;
  array<int, 5> dx = { -1,0,1,0,0 };
  array<int, 5> dy = { 0,-1,0,1,0 };
  auto d = [](char c) {
    if (c == 'L')return 0;
    if (c == 'U')return 1;
    if (c == 'R')return 2;
    if (c == 'D')return 3;
    return 4;
  };
  int unknown = 0;
  int x = 0, y = 0;
  for (auto& c : S) {
    if (c == '?')++unknown;
    x += dx[d(c)];
    y += dy[d(c)];
  }
  int a = 1, b = -1;
  if (T == 1)swap(a, b);
  for (int i = 0; i < unknown; ++i) {
    if (x == 0)
      if (y <= 0)y+=a; else y+=b;
    else if (x < 0)x+=a; else x+=b;
  }
  int ans = abs(x) + abs(y);
  cout << ans << endl;
}
