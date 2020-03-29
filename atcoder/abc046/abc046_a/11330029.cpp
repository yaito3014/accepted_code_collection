// URL: https://atcoder.jp/contests/abc046/submissions/11330029
// Date: Sun, 29 Mar 2020 01:58:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  cout << set<int>({ a,b,c }).size() << endl;
}
