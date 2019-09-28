// URL: https://atcoder.jp/contests/abc142/submissions/7737895
// Date: Sat, 28 Sep 2019 12:03:53 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  int N;
  cin >> N;
  cout << fixed << setprecision(7) << 1-N / 2 / static_cast<double>(N) << endl;
}
