// URL: https://atcoder.jp/contests/arc037/submissions/10123948
// Date: Sun, 16 Feb 2020 08:33:41 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  int64_t K;
  cin >> N >> K;
  vector<int> a(N), b(N);
  for (auto& e : a)cin >> e;
  for (auto& e : b)cin >> e;
  sort(begin(b), end(b));
  const int64_t Max = *max_element(begin(a), end(a)) * (int64_t)b.back();
  int64_t low = -1, high = Max;
  while (high - low > 1) {
    int64_t mid = low + (high - low) / 2;
    int64_t num = 0;
    for (int i = 0; i < N; ++i) {
      auto iter = lower_bound(begin(b), end(b), 0, [&](int64_t n, int) { return a[i] * n <= mid; });
      num += distance(begin(b), iter);
    }
    if (num >= K)high = mid;
    else low = mid;
  }
  cout << high << endl;
}
