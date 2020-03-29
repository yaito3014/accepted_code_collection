// URL: https://atcoder.jp/contests/abc054/submissions/11330543
// Date: Sun, 29 Mar 2020 02:25:04 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B;
  cin >> A >> B;
  if (A == 1)A = 14;
  if (B == 1)B = 14;
  cout << (A == B ? "Draw" : A > B ? "Alice" : "Bob") << endl;
}
