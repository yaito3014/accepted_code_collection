// URL: https://atcoder.jp/contests/abc160/submissions/11267301
// Date: Sat, 28 Mar 2020 12:01:44 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  bool ans = S[2] == S[3] && S[4] == S[5];
  cout << (ans ? "Yes" : "No") << endl;
}
