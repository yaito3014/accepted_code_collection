// URL: https://atcoder.jp/contests/abc159/submissions/11094092
// Date: Sun, 22 Mar 2020 12:11:37 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int N = S.length();
  auto is_circular = [](string s) { return equal(begin(s), end(s), rbegin(s)); };
  bool ans = is_circular(S) && is_circular(S.substr(0, (N - 1) / 2)) && is_circular(S.substr((N + 1) / 2));
  cout << (ans ? "Yes" : "No") << endl;
}
