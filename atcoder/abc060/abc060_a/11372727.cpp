// URL: https://atcoder.jp/contests/abc060/submissions/11372727
// Date: Mon, 30 Mar 2020 13:07:53 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string A, B, C;
  cin >> A >> B >> C;
  bool ans = A.back() == B.front() && B.back() == C.front();
  cout << (ans ? "YES" : "NO") << endl;
}
