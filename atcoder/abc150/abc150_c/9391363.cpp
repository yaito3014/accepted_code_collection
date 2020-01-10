// URL: https://atcoder.jp/contests/abc150/submissions/9391363
// Date: Fri, 10 Jan 2020 12:19:01 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> P(N), Q(N);
  for (auto& v : P)cin >> v;
  for (auto& v : Q)cin >> v;
  int a = -1, b = -1;
  vector<int> arr(N);
  iota(begin(arr), end(arr), 1);
  int count = 0;
  do {
    ++count;
    if (equal(begin(arr), end(arr), begin(P), end(P)))a = count;
    if (equal(begin(arr), end(arr), begin(Q), end(Q)))b = count;
    if (a != -1 && b != -1)break;
  } while (next_permutation(begin(arr), end(arr)));
  cout << abs(a - b) << endl;
}
