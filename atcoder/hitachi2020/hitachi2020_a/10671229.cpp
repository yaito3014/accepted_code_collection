// URL: https://atcoder.jp/contests/hitachi2020/submissions/10671229
// Date: Sun, 08 Mar 2020 12:03:47 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int N = S.length();
  bool ans = N % 2 == 0;
  for (int i = 0; i < N; i += 2) {
    if (S.substr(i, 2) == "hi")continue;
    ans = false;
    break;
  }
  cout << (ans ? "Yes" : "No") << endl;
}
