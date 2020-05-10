// URL: https://atcoder.jp/contests/abc167/submissions/13032128
// Date: Sun, 10 May 2020 12:06:24 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  cout << min(A, K) - max(0, K - A - B) << endl;
}
