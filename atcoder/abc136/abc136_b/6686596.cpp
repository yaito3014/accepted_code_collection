// URL: https://atcoder.jp/contests/abc136/submissions/6686596
// Date: Sun, 04 Aug 2019 12:05:20 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
int main() {
  std::cout.tie(0); std::ios::sync_with_stdio(false);
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 1; i <= N; ++i)
    if (((int)log10(i) + 1) % 2)++ans;
  cout << ans << endl;
}
