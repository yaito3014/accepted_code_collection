// URL: https://atcoder.jp/contests/abc149/submissions/10121953
// Date: Sun, 16 Feb 2020 06:53:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  int R, S, P;
  cin >> R >> S >> P;
  string T;
  cin >> T;
  const array<int, 3> scores = { R,S,P };
  auto cnv = [](char c) -> int {
    switch (c) {
    case 'r': return 0;
    case 's': return 1;
    case 'p': return 2;
    default: return -1;
    }
  };
  int ans = 0;
  vector<int> memo(N, 0);
  for (int i = 0; i < N; ++i) {
    int t = (cnv(T[i]) + 2) % 3;
    int score = scores[t];
    if (i >= K && memo[i - K] == t) {
      t = -1;
      score = 0;
    }
    memo[i] = t;
    ans += score;
  }
  cout << ans << endl;
}
