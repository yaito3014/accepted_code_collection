// URL: https://atcoder.jp/contests/abc061/submissions/11396527
// Date: Tue, 31 Mar 2020 13:18:39 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, C;
  cin >> A >> B >> C;
  bool ans = A <= C && C <= B;
  cout << (ans ? "Yes" : "No") << endl;
}
