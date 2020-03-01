// URL: https://atcoder.jp/contests/abc157/submissions/10438739
// Date: Sun, 01 Mar 2020 12:18:18 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  array<array<int, 3>, 3> A;
  for (auto& row : A)for (auto& elem : row)cin >> elem;
  int N;
  cin >> N;
  vector<int> B(N);
  for (auto& e : B)cin >> e;

  array<array<bool, 3>, 3> table = {};
  for (const auto e : B) {
    for (int y = 0; y < 3; ++y) {
      for (int x = 0; x < 3; ++x) {
        if (e != A[y][x])continue;
        table[y][x] = true;
      }
    }
  }
  bool ans = false;
  for (int i = 0; i < 3; ++i)ans |= count(begin(table[i]), end(table[i]), true) == 3;
  for (int x = 0; x < 3; ++x) {
    bool tmp = true;
    for (int y = 0; y < 3; ++y) {
      if (table[y][x])continue;
      tmp = false;
    }
    ans = ans || tmp;
  }
  ans = ans || (table[0][0] && table[1][1] && table[2][2]);
  ans = ans || (table[0][2] && table[1][1] && table[2][0]);
  cout << (ans ? "Yes" : "No") << endl;
}
