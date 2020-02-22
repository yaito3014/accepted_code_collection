// URL: https://atcoder.jp/contests/abc156/submissions/10271002
// Date: Sat, 22 Feb 2020 12:06:42 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  int ans = log(N) / log(K) + 1;
  cout << ans << endl;
}
