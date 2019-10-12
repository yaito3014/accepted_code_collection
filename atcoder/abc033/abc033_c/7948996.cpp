// URL: https://atcoder.jp/contests/abc033/submissions/7948996
// Date: Sat, 12 Oct 2019 12:02:26 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  string S;
  cin >> S;
  S += '+';
  int N = S.length();
  bool zero = false;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    if (S[i] == '+') {
      if (!zero)++ans;
      zero = false;
    }
    else if (S[i] == '0')zero = true;
  }
  cout << ans << endl;
}
