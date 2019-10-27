// URL: https://atcoder.jp/contests/abc144/submissions/8151797
// Date: Sun, 27 Oct 2019 12:04:34 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int N;
  cin >> N;
  bool ans = false;
  for (int i = 1; i <= 9; ++i) {
    if (N % i != 0)continue;
    int d = N / i;
    if (1 <= d && d <= 9) {
      ans = true;
      break;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
}
