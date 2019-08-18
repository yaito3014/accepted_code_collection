// URL: https://atcoder.jp/contests/abc138/submissions/6995549
// Date: Sun, 18 Aug 2019 12:26:08 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<double> V(N);
  for (auto& v : V)cin >> v;
  sort(begin(V), end(V));
  while (V.size() >= 2) {
    double val = (V[0] + V[1]) / 2;
    V.erase(V.begin(), V.begin() + 2);
    V.insert(lower_bound(begin(V), end(V), val), val);
  }
  cout << V[0] << endl;
}
