// URL: https://atcoder.jp/contests/abc156/submissions/10266990
// Date: Sat, 22 Feb 2020 12:03:32 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, R;
  cin >> N >> R;
  int ans = R;
  if (N < 10)ans += 100 * (10 - N);
  cout << ans << endl;
}
