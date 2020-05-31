// URL: https://atcoder.jp/contests/abc169/submissions/13796030
// Date: Sun, 31 May 2020 12:08:55 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<long long> A(N);
  for (auto& e : A) cin >> e;
  sort(begin(A), end(A));
  constexpr long long kInf = 1e18;
  long long res = 1;
  bool ok = true;
  for (const auto& e : A) {
    if (log10(res) + log10(e) > 18) {
      ok = false;
      break;
    }
    res *= e;
  }
  if (res > kInf) ok = false;
  cout << (ok ? res : -1) << endl;
}
