// URL: https://atcoder.jp/contests/abc167/submissions/13022642
// Date: Sun, 10 May 2020 12:02:00 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string S,T;
  cin >> S >> T;
  bool ans = S == T.substr(0, T.length() - 1);
  cout << (ans ? "Yes" : "No") << endl;
}
