// URL: https://atcoder.jp/contests/caddi2018/submissions/9929098
// Date: Thu, 06 Feb 2020 13:55:06 +0000
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
  cout << (all_of(begin(A), end(A), [](int v) { return v % 2 == 0; }) ? "second" : "first") << endl;
}
