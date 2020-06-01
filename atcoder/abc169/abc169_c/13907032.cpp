// URL: https://atcoder.jp/contests/abc169/submissions/13907032
// Date: Mon, 01 Jun 2020 00:01:11 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long A;
  long double B;
  cin >> A >> B;
  long long b = round(B * 100);
  cout << A * b / 100 << endl;
}
