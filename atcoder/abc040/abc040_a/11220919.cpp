// URL: https://atcoder.jp/contests/abc040/submissions/11220919
// Date: Thu, 26 Mar 2020 12:59:01 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int n, x;
  cin >> n >> x;
  cout << min(x - 1, n - x) << endl;
}
