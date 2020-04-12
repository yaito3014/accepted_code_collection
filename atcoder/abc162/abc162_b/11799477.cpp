// URL: https://atcoder.jp/contests/abc162/submissions/11799477
// Date: Sun, 12 Apr 2020 12:05:17 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  int64_t ans = 0;
  for (int i = 1; i <= N; ++i)
    if (i % 3 != 0 && i % 5 != 0)ans += i;
  cout << ans << endl;
}
