// URL: https://atcoder.jp/contests/abc100/submissions/11242485
// Date: Fri, 27 Mar 2020 14:57:11 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B;
  cin >> A >> B;
  bool ans = A <= 8 && B <= 8;
  cout << (ans?"Yay!":":(") << endl;
}
