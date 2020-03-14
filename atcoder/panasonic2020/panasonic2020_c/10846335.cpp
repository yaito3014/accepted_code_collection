// URL: https://atcoder.jp/contests/panasonic2020/submissions/10846335
// Date: Sat, 14 Mar 2020 12:17:36 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int64_t a, b, c;
  cin >> a >> b >> c;
  cout << (a + b + 2 * sqrtl(a * b) < c ? "Yes" : "No") << endl;
}
