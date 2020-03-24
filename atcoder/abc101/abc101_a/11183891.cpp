// URL: https://atcoder.jp/contests/abc101/submissions/11183891
// Date: Tue, 24 Mar 2020 14:59:59 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int ans = count(begin(S), end(S), '+');
  ans -= count(begin(S), end(S), '-');
  cout << ans << endl;
}
