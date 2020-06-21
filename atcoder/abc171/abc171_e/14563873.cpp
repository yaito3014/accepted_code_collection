// URL: https://atcoder.jp/contests/abc171/submissions/14563873
// Date: Sun, 21 Jun 2020 12:41:04 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  int s = accumulate(cbegin(A), cend(A), 0, [](int a, int b) { return a ^ b; });
  for (const auto& e : A) cout << (s ^ e) << ' ';
  cout << '\n';
}
