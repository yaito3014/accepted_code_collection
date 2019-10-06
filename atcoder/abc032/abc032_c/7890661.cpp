// URL: https://atcoder.jp/contests/abc032/submissions/7890661
// Date: Sun, 06 Oct 2019 15:12:59 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int N, K;
  cin >> N >> K;
  vector<int> s(N);
  for (auto& v : s)cin >> v;
  if (std::any_of(begin(s), end(s), [](int v) { return !v; })) {
    cout << N << endl;
    return 0;
  }
  int ans = 0;
  int right = 0;
  int64_t product = 1;
  for (int left = 0; left < N; ++left) {
    while (right < N && product * s[right] <= K) {
      product *= s[right];
      ++right;
    }
    ans = max(ans, right - left);
    if (left == right)++right;
    else product /= s[left];
  }
  cout << ans << endl;
}
