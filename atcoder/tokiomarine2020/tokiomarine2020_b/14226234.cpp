// URL: https://atcoder.jp/contests/tokiomarine2020/submissions/14226234
// Date: Sat, 13 Jun 2020 12:07:17 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long A, V, B, W, T;
  cin >> A >> V >> B >> W >> T;
  bool ans = abs(A - B) <= (V - W) * T;
  cout << (ans ? "YES" : "NO") << endl;
}
