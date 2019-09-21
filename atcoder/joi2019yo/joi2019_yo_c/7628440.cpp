// URL: https://atcoder.jp/contests/joi2019yo/submissions/7628440
// Date: Sat, 21 Sep 2019 05:24:12 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = 0;
  for (int i = 0; i < N - 1; ++i)
    if (S[i] != S[i + 1] && ++ans)++i;
  cout << ans << endl;
}
