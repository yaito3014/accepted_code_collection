// URL: https://atcoder.jp/contests/agc040/submissions/9301438
// Date: Fri, 03 Jan 2020 12:28:59 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int N = S.length();
  vector<int64_t> sumL(N + 1, 0), sumR(N + 1, 0);
  for (int i = 0; i < N; ++i)
    if (S[i] == '<')sumL[i + 1] = sumL[i] + 1;
    else sumL[i + 1] = 0;
  for (int i = N - 1; i >= 0; --i)
    if (S[i] == '>')sumR[i] = sumR[i + 1] + 1;
    else sumR[i] = 0;
  int64_t sum = 0;
  for (int i = 0; i <= N; ++i)
    sum += max(sumL[i], sumR[i]);
  cout << sum << endl;
}
