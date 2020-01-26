// URL: https://atcoder.jp/contests/abc153/submissions/9743642
// Date: Sun, 26 Jan 2020 12:12:04 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> H(N);
  for (auto& v : H)cin >> v;
  sort(begin(H), end(H));
  int64_t ans = 0;
  for (int i = 0; i < N - K; ++i)
    ans += H[i];
  cout << ans << endl;
}
