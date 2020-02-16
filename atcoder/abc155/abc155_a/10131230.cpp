// URL: https://atcoder.jp/contests/abc155/submissions/10131230
// Date: Sun, 16 Feb 2020 12:03:00 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int A, B, C;
  cin >> A >> B >> C;
  bool ans = (A == B && A != C) || (A == C && A != B) || (B == C && A != B);
  cout << (ans ? "Yes" : "No") << endl;
}
