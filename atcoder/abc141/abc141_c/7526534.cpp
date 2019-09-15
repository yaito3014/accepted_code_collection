// URL: https://atcoder.jp/contests/abc141/submissions/7526534
// Date: Sun, 15 Sep 2019 12:19:03 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> players(N, 0);
  for (int i = 0; i < Q; ++i) {
    int A;
    cin >> A;
    ++players[A - 1];
  }
  for (auto& v : players)
    cout << (v > Q - K ? "Yes" : "No") << endl;
}
