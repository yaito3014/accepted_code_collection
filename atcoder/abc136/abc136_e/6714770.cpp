// URL: https://atcoder.jp/contests/abc136/submissions/6714770
// Date: Sun, 04 Aug 2019 14:31:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
int main() {
  std::cout.tie(0); std::ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto& v : A)cin >> v;
  int sum = accumulate(begin(A), end(A), 0);
  deque<int> divisors;
  for (int i = 1; i * i <= sum; ++i) {
    if (sum % i != 0)continue;
    divisors.push_back(i);
    if (i * i != sum)divisors.push_back(sum / i);
  }
  sort(rbegin(divisors), rend(divisors));
  for (auto& v : divisors) {
    deque<int> rs;
    for (int i = 0; i < N; ++i) {
      if (A[i] % v == 0)continue;
      rs.push_back(A[i] % v);
    }
    if (rs.empty()) {
      cout << v << endl;
      return 0;
    }
    sort(begin(rs), end(rs));
    int n = rs.size();
    vector<int64_t> csum(n + 1, 0);
    for (int i = 0; i < n; ++i)
      csum[i + 1] = csum[i] + rs[i];
    bool ans = false;
    for (int i = 1; i <= n - 1; ++i) {
      if (v * (int64_t)(n-i) - (csum[n] - csum[i]) != csum[i])continue;
      if (csum[i] <= K)ans = true;
      break;
    }
    if (!ans)continue;
    cout << v << endl;
    break;
  }
}
