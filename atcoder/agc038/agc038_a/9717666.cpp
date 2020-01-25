// URL: https://atcoder.jp/contests/agc038/submissions/9717666
// Date: Sat, 25 Jan 2020 14:28:15 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int H, W, A, B;
  cin >> H >> W >> A >> B;
  for (int h = 0; h < H; ++h) {
    for (int w = 0; w < W; ++w)
      if(h<B)cout << (w < A ? 1 : 0);
      else cout << (w < A ? 0 : 1);
    cout << '\n';
  }
}
