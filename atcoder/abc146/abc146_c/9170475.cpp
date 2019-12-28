// URL: https://atcoder.jp/contests/abc146/submissions/9170475
// Date: Sat, 28 Dec 2019 08:36:30 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;


int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  long long int A, B, X;
  cin >> A >> B >> X;
  long long int left = 0, right = 1000000001;
  while (right - left > 1) {
    long long int mid = left + (right - left) / 2;
    if (A * mid + B * ((long long int)(log10(mid)) + 1) <= X) left = mid;
    else right = mid;
  }
  cout << left << endl;
}
