// URL: https://atcoder.jp/contests/abc155/submissions/10136371
// Date: Sun, 16 Feb 2020 12:06:43 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& e : A)cin >> e;
  bool ans = all_of(begin(A), end(A), [](int n) { return n % 2 != 0 || (n % 3 == 0 || n % 5 == 0); });
  cout << (ans ? "APPROVED" : "DENIED") << endl;
}
