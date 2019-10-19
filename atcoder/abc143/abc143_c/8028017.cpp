// URL: https://atcoder.jp/contests/abc143/submissions/8028017
// Date: Sat, 19 Oct 2019 12:10:02 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = distance(begin(S), unique(begin(S), end(S)));
  cout << ans << endl;
}
