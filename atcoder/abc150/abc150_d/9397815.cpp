// URL: https://atcoder.jp/contests/abc150/submissions/9397815
// Date: Fri, 10 Jan 2020 12:50:52 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int64_t gcd(int64_t a, int64_t b) {
  return b ? gcd(b, a % b) : a;
}

int64_t lcm(int64_t a, int64_t b) {
  return a / gcd(a, b) * b;
}

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int64_t> a(N);
  for (auto& v : a)cin >> v;
  int64_t l = a[0] / 2;
  for (int i = 1; i < N; ++i) l = lcm(l, a[i] / 2);
  bool all_odd = true;
  for (int i = 0; i < N; ++i) {
    if (l / (a[i] / 2) % 2 == 1)continue;
    all_odd = false;
    break;
  }
  if (all_odd)
    cout << (M + l) / (l * 2) << endl;
  else
    cout << 0 << endl;
}
