// URL: https://atcoder.jp/contests/nomura2020/submissions/13721318
// Date: Sat, 30 May 2020 12:08:09 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int N = S.length();
  replace(begin(S), end(S), '?', 'D');
  cout << S << endl;
}
