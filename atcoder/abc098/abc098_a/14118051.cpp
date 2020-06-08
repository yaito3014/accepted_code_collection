// URL: https://atcoder.jp/contests/abc098/submissions/14118051
// Date: Mon, 08 Jun 2020 13:26:47 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int A, B;
  cin >> A >> B;
  cout << max({A + B, A - B, A * B}) << endl;
}
