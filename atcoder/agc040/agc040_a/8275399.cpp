// URL: https://atcoder.jp/contests/agc040/submissions/8275399
// Date: Sun, 03 Nov 2019 15:42:57 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  string S;
  cin >> S;
  int N = S.length() + 1;
  S = ">" + S + "<";
  vector<int> a(N, 0);
  for (int i = 0; i < N; ++i) {
    if (S[i] == '>' && S[i + 1] == '<') {
      for (int j = i + 1; j < N && S[j] == '<'; ++j)a[j] = max(a[j], a[j - 1] + 1);
      for (int j = i; j > 0 && S[j] == '>'; --j)a[j - 1] = max(a[j - 1], a[j] + 1);
    }
  }
  int64_t ans = accumulate(begin(a), end(a), (int64_t)0);
  cout << ans << endl;
}
