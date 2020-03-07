// URL: https://atcoder.jp/contests/rcl-contest-2020-final-open/submissions/10577090
// Date: Sat, 07 Mar 2020 05:09:15 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  array<int, 6> dice = {{ 1, 2, 3, 4, 5, 6 }};
  for (int i = 0; i < M; ++i) {
    for(const auto & e : dice)cout << e << " ";
    cout << endl;
    int d, v, x;
    cin >> d >> v >> x;
  }
}
