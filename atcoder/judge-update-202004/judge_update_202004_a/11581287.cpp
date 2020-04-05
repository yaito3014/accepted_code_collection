// URL: https://atcoder.jp/contests/judge-update-202004/submissions/11581287
// Date: Sun, 05 Apr 2020 12:01:48 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int S, L, R;
  cin >> S >> L >> R;
  cout << clamp(S, L, R) << endl;
}
