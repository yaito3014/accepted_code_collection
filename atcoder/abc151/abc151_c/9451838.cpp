// URL: https://atcoder.jp/contests/abc151/submissions/9451838
// Date: Sun, 12 Jan 2020 12:14:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> p(M);
  vector<string> s(M);
  for (int i = 0; i < M; ++i)
    cin >> p[i] >> s[i];
  vector<int> WA(N, 0);
  vector<bool> AC(N, false);
  for (int i = 0; i < M; ++i) {
    --p[i];
    if (AC[p[i]])continue;
    if (s[i] == "AC")AC[p[i]] = true;
    else ++WA[p[i]];
  }
  for (int i = 0; i < N; ++i)if (!AC[i])WA[i] = 0;
  int AC_sum = count(begin(AC), end(AC), true);
  int WA_sum =accumulate(begin(WA), end(WA), 0);
  cout << AC_sum << " " << WA_sum << endl;
}
