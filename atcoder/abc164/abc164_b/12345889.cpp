// URL: https://atcoder.jp/contests/abc164/submissions/12345889
// Date: Sun, 26 Apr 2020 12:05:13 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  cout << (A / D + (A % D ? 1 : 0) >= C / B + (C % B ? 1 : 0) ? "Yes" : "No") << endl;
}
