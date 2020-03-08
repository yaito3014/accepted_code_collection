// URL: https://atcoder.jp/contests/abc038/submissions/10661009
// Date: Sun, 08 Mar 2020 07:15:47 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int H1, W1, H2, W2;
  cin >> H1 >> W1 >> H2 >> W2;
  bool ans = H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2;
  cout << (ans ? "YES" : "NO") << endl;
}
