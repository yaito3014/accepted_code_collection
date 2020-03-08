// URL: https://atcoder.jp/contests/abc036/submissions/10658342
// Date: Sun, 08 Mar 2020 05:40:28 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B;
  cin >> A >> B;
  cout << (B / A + (B % A != 0 ? 1 : 0)) << endl;
}
