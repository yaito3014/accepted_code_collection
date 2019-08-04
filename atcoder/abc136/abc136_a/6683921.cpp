// URL: https://atcoder.jp/contests/abc136/submissions/6683921
// Date: Sun, 04 Aug 2019 12:02:41 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
int main() {
  std::cout.tie(0); std::ios::sync_with_stdio(false);
  int A, B, C;
  cin >> A >> B >> C;
  int ans = max(0, C - (A - B));
  cout << ans << endl;
}
