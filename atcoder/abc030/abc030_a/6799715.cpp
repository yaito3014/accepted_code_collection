// URL: https://atcoder.jp/contests/abc030/submissions/6799715
// Date: Sat, 10 Aug 2019 11:12:46 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int t = C * B, a = A * D;
  cout << (t == a ? "DRAW" : t > a ? "TAKAHASHI" : "AOKI") << endl;
}
