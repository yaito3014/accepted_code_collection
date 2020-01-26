// URL: https://atcoder.jp/contests/abc153/submissions/9739369
// Date: Sun, 26 Jan 2020 12:07:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int H, N;
  cin >> H >> N;
  int sum = 0;
  for (int i = 0; i < N; ++i) {
    int A;
    cin >> A;
    sum += A;
  }
  cout << (H <= sum ? "Yes" : "No") << endl;
}
