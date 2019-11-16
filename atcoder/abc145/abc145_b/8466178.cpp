// URL: https://atcoder.jp/contests/abc145/submissions/8466178
// Date: Sat, 16 Nov 2019 12:03:15 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  string S;
  cin >> S;
  bool ans = N % 2 == 0 ? S.substr(0, N / 2) == S.substr(N / 2) : false;
  cout << (ans ? "Yes" : "No") << endl;
}
