// URL: https://atcoder.jp/contests/abc143/submissions/8020247
// Date: Sat, 19 Oct 2019 12:01:57 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;


int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int A, B;
  cin >> A >> B;
  int ans = max(0, A - B * 2);
  cout << ans << endl;
}
