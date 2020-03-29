// URL: https://atcoder.jp/contests/abc042/submissions/11329878
// Date: Sun, 29 Mar 2020 01:50:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, C;
  cin >> A >> B >> C;
  array<int, 3> ar = { { A, B, C } };
  sort(begin(ar), end(ar));
  bool ans = ar == array<int, 3>{ { 5, 5, 7 }};
  cout << (ans ? "YES" : "NO") << endl;
}
