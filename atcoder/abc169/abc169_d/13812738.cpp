// URL: https://atcoder.jp/contests/abc169/submissions/13812738
// Date: Sun, 31 May 2020 12:18:15 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long N;
  cin >> N;
  map<int, int> m;
  for (long long i = 2; i * i <= N; ++i) {
    while (N % i == 0) {
      N /= i;
      ++m[i];
    }
  }
  if (N != 1) ++m[N];
  int cnt = 0;
  for (auto& p : m) {
    for (int i = 1; p.second >= i; ++i) {
      p.second -= i;
      ++cnt;
    }
  }
  cout << cnt << endl;
}
