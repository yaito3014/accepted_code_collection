// URL: https://atcoder.jp/contests/abc031/submissions/6800718
// Date: Sat, 10 Aug 2019 11:56:49 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int A, D;
  cin >> A >> D;
  ++(A > D ? D : A);
  cout << A*D << endl;
}
