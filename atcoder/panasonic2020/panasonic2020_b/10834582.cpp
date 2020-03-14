// URL: https://atcoder.jp/contests/panasonic2020/submissions/10834582
// Date: Sat, 14 Mar 2020 12:07:18 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int64_t H, W;
  cin >> H >> W;
  if (H > 1 && W > 1)cout << (H * W / 2 + (H * W % 2 ? 1 : 0)) << endl;
  else cout << 1 << endl;
}
