// URL: https://atcoder.jp/contests/abc150/submissions/9387165
// Date: Fri, 10 Jan 2020 12:09:14 +0000
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
  size_t pos = 0;
  int ans = 0;
  while ((pos = S.find("ABC", pos)) != string::npos) {
    ++ans;
    pos += 3;
  }
  cout << ans << endl;
}
