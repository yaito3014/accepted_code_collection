// URL: https://atcoder.jp/contests/abc154/submissions/9979705
// Date: Sun, 09 Feb 2020 12:06:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  string S, T, U;
  int A, B;
  cin >> S >> T;
  cin >> A >> B;
  cin >> U;
  if (S == U)--A;
  else --B;
  cout << A << " " << B << endl;
}
