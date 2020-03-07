// URL: https://atcoder.jp/contests/abc158/submissions/10597088
// Date: Sat, 07 Mar 2020 12:08:32 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B;
  cin >> A >> B;
  int ans = -1;
  for (int i = 1; i <= 10000; ++i) {
    if (int(i * 0.08) == A && int(i * 0.10) == B) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}
