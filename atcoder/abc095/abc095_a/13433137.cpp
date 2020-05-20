// URL: https://atcoder.jp/contests/abc095/submissions/13433137
// Date: Wed, 20 May 2020 13:24:19 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int o = count(cbegin(S), cend(S), 'o');
  cout << (700 + 100 * o) << endl;
}
