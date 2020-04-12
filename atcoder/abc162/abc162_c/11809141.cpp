// URL: https://atcoder.jp/contests/abc162/submissions/11809141
// Date: Sun, 12 Apr 2020 12:11:07 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int K;
  cin >> K;
  int ans = 0;
  for (int i = 1; i <= K; ++i)
    for (int j = 1; j <= K; ++j)
      for (int k = 1; k <= K; ++k)
        ans += gcd(gcd(i, j), k);
  cout << ans << endl;
}
