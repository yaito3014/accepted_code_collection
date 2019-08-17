// URL: https://atcoder.jp/contests/agc037/submissions/6956261
// Date: Sat, 17 Aug 2019 12:26:13 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int N = S.length();
  int K = 1;
  string prev;
  for (int i = 0; i < N; ++i) {
    int j = 1;
    for (; j <= N - i; ++j)
      if (prev != S.substr(0, j))break;
    if (j > N - i) {
      --K;
      break;
    }
    prev = S.substr(0, j);
    S = S.substr(j);
    if (S.empty())break;
    ++K;
  }
  cout << K << endl;
}
