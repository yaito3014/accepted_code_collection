// URL: https://atcoder.jp/contests/nomura2020/submissions/13716312
// Date: Sat, 30 May 2020 12:02:50 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int H1, M1, H2, M2, K;
  cin >> H1 >> M1 >> H2 >> M2 >> K;
  int ans = (H2 * 60 + M2 - K) - (H1 * 60 + M1);
  cout << ans << endl;
}
