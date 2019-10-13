// URL: https://atcoder.jp/contests/abc035/submissions/7962018
// Date: Sun, 13 Oct 2019 10:40:30 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int W, H;
  cin >> W >> H;
  cout << (W / (double)H == 4 / 3. ? "4:3" : "16:9") << endl;
}
