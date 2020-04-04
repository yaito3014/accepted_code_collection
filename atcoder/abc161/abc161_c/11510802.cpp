// URL: https://atcoder.jp/contests/abc161/submissions/11510802
// Date: Sat, 04 Apr 2020 12:15:57 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int64_t N, K;
  cin >> N >> K;
  cout << min(N, (N / K + (N % K ? 1 : 0)) * K - N) << endl;
}
