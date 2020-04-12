// URL: https://atcoder.jp/contests/abc162/submissions/11791890
// Date: Sun, 12 Apr 2020 12:02:13 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string N;
  cin >> N;
  bool ans = N.find('7') != string::npos;
  cout << (ans ? "Yes" : "No") << endl;
}
