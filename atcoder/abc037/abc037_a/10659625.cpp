// URL: https://atcoder.jp/contests/abc037/submissions/10659625
// Date: Sun, 08 Mar 2020 06:27:53 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, C;
  cin >> A >> B >> C;
  cout << (C / min(A, B)) << endl;
}
