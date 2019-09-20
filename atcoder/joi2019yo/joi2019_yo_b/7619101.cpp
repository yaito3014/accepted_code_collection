// URL: https://atcoder.jp/contests/joi2019yo/submissions/7619101
// Date: Fri, 20 Sep 2019 12:29:15 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N;
  cin >> N;
  bitset<2019> field;
  vector<int> X(N);
  for (auto& v : X) {
    cin >> v;
    field[--v] = true;
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; ++i) {
    int A;
    cin >> A;
    --A;
    if (X[A] == 2019 - 1 || field[X[A] + 1])continue;
    field[X[A]] = false;
    field[++X[A]] = true;
  }
  for (auto& v : X)
    cout << v + 1 << "\n";
  cout << flush;
}
