// URL: https://atcoder.jp/contests/abc154/submissions/9985298
// Date: Sun, 09 Feb 2020 12:12:55 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& v : A)cin >> v;
  sort(begin(A), end(A));
  cout << (unique(begin(A), end(A)) == end(A) ? "YES" : "NO") << endl;
}
