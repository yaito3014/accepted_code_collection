// URL: https://codeforces.com/contest/1348/submission/78678882
// Date: Fri, 01 May 2020 14:56:13 +0000
// Language: GNU C++17
﻿// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n;
    cin >> n;
    int a = 1 << n, b = 0;
    int j = 1;
    for (; j <= n / 2 - 1; ++j)a += 1 << j;
    for (; j < n; ++j)b += 1 << j;
    cout << (a - b) << endl;
  }
}
