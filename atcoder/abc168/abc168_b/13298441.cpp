// URL: https://atcoder.jp/contests/abc168/submissions/13298441
// Date: Sun, 17 May 2020 12:04:51 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int K;
  cin >> K;
  string S;
  cin >> S;
  if (S.length() > K) S = S.substr(0, K) + "...";
  cout << S << endl;
}
