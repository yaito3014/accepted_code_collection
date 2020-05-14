// URL: https://atcoder.jp/contests/abc094/submissions/13210177
// Date: Thu, 14 May 2020 13:20:21 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int A, B, X;
  cin >> A >> B >> X;
  cout << (A <= X && X <= A + B ? "YES" : "NO") << endl;
}
