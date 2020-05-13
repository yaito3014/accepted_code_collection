// URL: https://atcoder.jp/contests/abc093/submissions/13178002
// Date: Wed, 13 May 2020 11:57:00 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string S;
  cin >> S;
  sort(begin(S), end(S));
  cout << (S == "abc" ? "Yes" : "No") << endl;
}
